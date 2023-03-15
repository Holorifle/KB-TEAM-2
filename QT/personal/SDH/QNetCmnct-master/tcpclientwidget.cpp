#include "tcpclientwidget.h"
#include "ui_tcpclientwidget.h"
#include "textwithtime.h"
#include <QNetworkProxy>

TCPClientWidget::TCPClientWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TCPClientWidget)
{
    ui->setupUi(this);
    ui->sendMsgBtn->setEnabled(false);
    ui->stopConBtn->setEnabled(false);

    ui->ipInput->setText("127.0.0.1");
    ui->portInput->setText("12340");

    m_Socket = new QTcpSocket(this);

    connect(m_Socket, &QTcpSocket::readyRead, this, [=](){
        QByteArray data = m_Socket->readAll();
        ui->historyMsg->append("From server: " + data);
    });

    connect(m_Socket, &QTcpSocket::disconnected, this, [=](){
        m_Socket->close();
        ui->startConBtn->setEnabled(true);
        ui->stopConBtn->setEnabled(false);
        ui->sendMsgBtn->setEnabled(false);
        ui->historyMsg->append(TextWithTime::WithTime("Server disconnected"));
        ui->statusLable->setText("Status: Disconnected");
    });

    connect(m_Socket, &QTcpSocket::connected, this, [=](){
        ui->startConBtn->setEnabled(false);
        ui->stopConBtn->setEnabled(true);
        ui->statusLable->setText("Status: Connected");
        ui->historyMsg->append(TextWithTime::WithTime("Server connected"));
        ui->sendMsgBtn->setEnabled(true);
    });
}

TCPClientWidget::~TCPClientWidget()
{
    delete ui;
}

void TCPClientWidget::on_startConBtn_clicked()
{
    QString address = ui->ipInput->text();
    ushort port = ui->portInput->text().toUShort();
    m_Socket->setProxy(QNetworkProxy::NoProxy);
    m_Socket->connectToHost(QHostAddress(address), port);
}


void TCPClientWidget::on_sendMsgBtn_clicked()
{
    QString msg = ui->sendMsg->toPlainText();
    m_Socket->write(msg.toUtf8());
    ui->historyMsg->append(TextWithTime::WithTime("From client: " + msg));
    ui->sendMsg->clear();
}


void TCPClientWidget::on_stopConBtn_clicked()
{
    m_Socket->close();
}

