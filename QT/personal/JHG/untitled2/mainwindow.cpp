#include "mainwindow.h" //클라만됨
#include "ui_mainwindow.h"

#include <QDebug>
#include <QAbstractSocket>
#include <QDialog>
#include <QtGui>

#include <QHostAddress>
#include <QNetworkInterface>
#include <QDebug>               // 디버그 출력용

/*#include <QHostAddress>
#include <QImage>
#include <QPixmap>
#include <QGraphicsView>
#include <QGraphicsScene>*/

int gPort = 5000;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    _server(this)
//  m_serial(new QSerialPort(this))
{
    ui->setupUi(this);
    timer = new QTimer(this);

    QString str = QString::number(gPort);
    ui->lineEdit->setText(str);

    connect(&_server, SIGNAL(newConnection()), this, SLOT(onNewConnection()));

//    m_serial(new QSerialPort(this));
//    connect(m_serial, &QSerialPort::readyRead, this, &MainWindow::readData);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onNewConnection()
{
    QTcpSocket *socket    = _server.nextPendingConnection();

    connect(socket,
            SIGNAL(readyRead()),
            this,
            SLOT(onReadyRead())
           );
    connect(socket,
            SIGNAL(stateChanged(QAbstractSocket::SocketState)),
            this,
            SLOT(onSocketStateChanged(QAbstractSocket::SocketState))
           );


//  QDateTime dateTime = QDateTime::currentDateTime();  // 년월일시분초 까지 나온다
    QTime dateTime = QTime::currentTime();
    QList<QHostAddress> addrList = QNetworkInterface::allAddresses();

    ui->textBrowser_3->insertPlainText(dateTime.toString()+' '+addrList[1].toString()+'\n');

    _sockets.push_back(socket);
    for (QTcpSocket* socket : _sockets) {
        socket->write(">>> Connected to Communication Emulator Server <<<<\n");
        socket->write("=================================================\n");
        isTCP       = true;
    }
}

void MainWindow::onSocketStateChanged(QAbstractSocket::SocketState socketState)
{
    if (socketState == QAbstractSocket::UnconnectedState)
    {
        QTcpSocket* sender  = static_cast<QTcpSocket*>(QObject::sender());
        _sockets.removeOne(sender);
        isTCP               = false;
    }
}

void MainWindow::onReadyRead()
{
    QTcpSocket* sender = static_cast<QTcpSocket*>(QObject::sender());

    QByteArray datas = sender->readAll();

    ui->textBrowser->insertPlainText(datas);
    //ui->textBrowser_3->setText(datas);

 //      socket->write(datas);

    qDebug() << datas;
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->textBrowser->clear();
}

void MainWindow::on_pushButton_clicked()
{
    QString str = ui->pushButton->text();

    if(str == "Listen"){
        ui->pushButton->setText("Close");

        gPort = ui->lineEdit->text().toInt();
        _server.listen(QHostAddress::Any, gPort);

        isTCP  = true;
    }
    else{
        ui->pushButton->setText("Listen");

        QTcpSocket* sender  = static_cast<QTcpSocket*>(QObject::sender());
        _sockets.removeOne(sender);
        _server.close();

        isTCP  = false;
    }
    Sleep(30);
}

void MainWindow::on_pushButton_10_clicked()
{
    QString str;
    QTcpSocket *socket    = _server.nextPendingConnection();

    str = ui->lineEdit_7->text();
    ui->textBrowser_5->insertPlainText(str);

    for (QTcpSocket* socket : _sockets) {
        socket->write(str.toUtf8());
        qDebug() << "socket->write 함수를 사용 하였어요\n";
    }
}

////////////////////////////////////////////////////////////
/*
// Client.h
#ifndef CLIENT_H
#define CLIENT_H

#include <QMainWindow>
#include <QtCore>
#include <QtNetwork>

namespace Ui {
    class Client;
}

class Client : public QMainWindow
{
    Q_OBJECT

public:
    explicit Client(QWidget *parent = nullptr);
    ~Client();

public slots:
    bool connectToHost(QString host);
    bool writeData(QByteArray data);

private slots:
    void on_pushButton_clicked();

private:
    Ui::Client *ui;
    QTcpSocket *socket;
    bool fd_flag = false;
    bool send_flag = false;
    int cnt = 0;
};

#endif // CLIENT_H


// Client.cpp
#include "client.h"
#include "ui_client.h"

static inline QByteArray IntToArray(qint32 source);

Client::Client(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Client)
{
    ui->setupUi(this);
    socket = new QTcpSocket(this);
    fd_flag = connectToHost("127.0.0.1"); // localhost

    if(!fd_flag)
        ui->textBrowser->insertPlainText("Socket connect fail\n");
}

Client::~Client()
{
    delete ui;
}

bool Client::connectToHost(QString host)
{
    socket->connectToHost(host, 1024); // ip address, port
    return socket->waitForConnected();
}

bool Client::writeData(QByteArray data)
{
    if(socket->state() == QAbstractSocket::ConnectedState)
    {
        socket->write(IntToArray(data.size())); // write size of data
        socket->write(data); // write the data itself
        return socket->waitForBytesWritten();
    }
    else
    {
        return false;
    }
}

QByteArray IntToArray(qint32 source) // Use qint32 to ensure that the number have 4 bytes
{
    // Avoid use of cast, this is the Qt way to serialize objects
    QByteArray temp;
    QDataStream data(&temp, QIODevice::ReadWrite);
    data << source;
    return temp;
}

void Client::on_pushButton_clicked()
{
    if(fd_flag)
    {
        QString textData, sendData;
        textData.sprintf("Button click: %d\n", cnt);
        sendData.sprintf("Socket data: %d\n", cnt);
        ui->textBrowser->insertPlainText(textData);
        send_flag = writeData(sendData.toStdString().c_str());

        if(!send_flag)
            ui->textBrowser->insertPlainText("Socket send fail\n");
        else
            cnt++;
    }
}*/
