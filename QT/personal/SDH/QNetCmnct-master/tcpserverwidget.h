#ifndef TCPSERVERWIDGET_H
#define TCPSERVERWIDGET_H

#include <QWidget>
#include <QTcpServer>
#include <QTcpSocket>
#include <QString>

namespace Ui {
class TCPServerWidget;
}

class TCPServerWidget : public QWidget
{
    Q_OBJECT

public:
    TCPServerWidget(QWidget *parent = nullptr);
    TCPServerWidget(int defaultPort, QWidget *parent = nullptr);
    ~TCPServerWidget();

private slots:
    void on_setListenButton_clicked();

    void on_sendButton_clicked();

    void on_stopLisBtn_clicked();

    void on_disConButton_clicked();

private:
    Ui::TCPServerWidget *ui;
    QTcpServer * m_Server;
    QTcpSocket * m_Socket;

    void initWindow();
};

#endif // TCPSERVERWIDGET_H
