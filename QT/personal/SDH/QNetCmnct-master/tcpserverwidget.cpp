#include "tcpserverwidget.h"
#include "textwithtime.h"
#include "ui_tcpserverwidget.h"
#include <QScrollBar>

TCPServerWidget::TCPServerWidget(int defaultPort, QWidget *parent)
    : QWidget(parent), ui(new Ui::TCPServerWidget) {
    ui->setupUi(this);

    ui->portInput->setText(QString::number(defaultPort));

    initWindow();
}

TCPServerWidget::TCPServerWidget(QWidget *parent)
    : QWidget(parent), ui(new Ui::TCPServerWidget) {
    ui->setupUi(this);

    ui->portInput->setText("78900");


    initWindow();
}

void TCPServerWidget::initWindow() {
    m_Socket = nullptr;
    m_Server = new QTcpServer(this);

    ui->sendButton->setEnabled(false);
    ui->stopLisBtn->setEnabled(false);
    ui->disConButton->setEnabled(false);

    connect(m_Server, &QTcpServer::newConnection, this, [=]() {
        m_Socket = m_Server->nextPendingConnection();

        ui->historyMsg->append(TextWithTime::WithTime("Client connected"));
        ui->sendButton->setEnabled(true);
        ui->disConButton->setEnabled(true);

        connect(m_Socket, &QTcpSocket::readyRead, this, [=]() {
            QByteArray data = m_Socket->readAll();
            ui->historyMsg->append(TextWithTime::WithTime("Client: " + data));
        });

        connect(m_Socket, &QTcpSocket::disconnected, this, [=]() {
            m_Socket->close();
            m_Socket->deleteLater();
            ui->statusLable->setText("Status: Disconnected");
            ui->historyMsg->append(TextWithTime::WithTime("Client disconnected"));
            ui->sendButton->setEnabled(false);
            ui->disConButton->setEnabled(false);
        });
    });
}

TCPServerWidget::~TCPServerWidget() { delete ui; }

void TCPServerWidget::on_setListenButton_clicked() {
    unsigned short port = ui->portInput->text().toUShort();
    m_Server->listen(QHostAddress::Any, port);
    ui->setListenButton->setEnabled(false);
    ui->stopLisBtn->setEnabled(true);
    ui->historyMsg->append(TextWithTime::WithTime("Start listen at port : " +
                                                  ui->portInput->text()));
}

void TCPServerWidget::on_sendButton_clicked() {
    QString msg = ui->sendMsg->toPlainText();
    m_Socket->write(msg.toUtf8());
    ui->historyMsg->append(TextWithTime::WithTime("Server: " + msg));
    ui->sendMsg->clear();
}

void TCPServerWidget::on_stopLisBtn_clicked() {
    if (m_Socket != nullptr) {
        m_Socket->close();
        m_Socket->deleteLater();
        m_Socket = nullptr;
    }
    m_Server->close();
    ui->historyMsg->append(
        TextWithTime::WithTime("Stop listen at port: " + ui->portInput->text()));
    ui->setListenButton->setEnabled(true);
    ui->stopLisBtn->setEnabled(false);
}

void TCPServerWidget::on_disConButton_clicked() {
    //m_Socket->disconnect();
    //emit m_Socket->disconnected();
    m_Socket->close();
    m_Socket->deleteLater();
}
