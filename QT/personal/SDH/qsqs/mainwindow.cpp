#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , m_serialPort(new QSerialPort(this))
{
    ui->setupUi(this);

    fillPortsInfo();

    connect(m_serialPort, &QSerialPort::readyRead, this, &MainWindow::readData);
    connect(m_serialPort, &QSerialPort::errorOccurred, this, &MainWindow::handleError);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::fillPortsInfo()
{
    ui->comboBox->clear();

    const auto infos = QSerialPortInfo::availablePorts(); // 시리얼 포트 정보 이용가능하도록
    for(const QSerialPortInfo &info : infos) {
        ui->comboBox->addItem(info.portName()); // 콤보박스에 시리얼포트 정보 받아온 이름을 붙여넣는다.
    }
}

void MainWindow::on_btnConnect_clicked()
{
    // 시리얼 설정 코드
    m_serialPort->setPortName(ui->comboBox->currentText()); // 포트 이름 지정
    m_serialPort->setBaudRate(QSerialPort::Baud9600); // baud: 초당 신호(siganl) 요소의 수 , 예) 하나의 버드에 2bit 있다면 1Baud 동안 2bit 전송 됨
    m_serialPort->setDataBits(QSerialPort::Data8); // dataBits
    m_serialPort->setParity(QSerialPort::NoParity); // 정보 전달 과정에 오류가 생겼는지 검사하기 위한 것
    m_serialPort->setStopBits(QSerialPort::OneStop); // 포트를 열기전에 set 또는 success 하면 return true로 반환된다.
    m_serialPort->setFlowControl(QSerialPort::NoFlowControl); // 흐름제어
    if (m_serialPort->open(QIODevice::ReadWrite)) { //시리얼 장치 연 후 작업들
        ui->btnConnect->setEnabled(false);
        ui->btnDisConnect->setEnabled(true);
    }
    else {
        QMessageBox::critical(this, tr("Error"), m_serialPort->errorString());
    }
}

void MainWindow::on_btnDisConnect_clicked()
{
    if (m_serialPort->isOpen()) // 시리얼 포트 열렸으면
        m_serialPort->close(); // 시리얼 닫아라
    ui->btnConnect->setEnabled(true);
    ui->btnDisConnect->setEnabled(false);
}

void MainWindow::readData()
{
    const QByteArray data = m_serialPort->readAll();


    qDebug() << data.size() << "/" << (int)data[2];
}

void MainWindow::handleError(QSerialPort::SerialPortError error)
{
    if (error == QSerialPort::ResourceError) {
        QMessageBox::critical(this, tr("Critical Error"), m_serialPort->errorString());
        on_btnDisConnect_clicked();
    }
}
