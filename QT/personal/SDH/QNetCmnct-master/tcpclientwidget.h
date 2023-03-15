#ifndef TCPCLIENTWIDGET_H
#define TCPCLIENTWIDGET_H

#include <QWidget>
#include <QTcpSocket>
#include <QHostAddress>

namespace Ui {
class TCPClientWidget;
}

class TCPClientWidget : public QWidget
{
    Q_OBJECT

public:
    explicit TCPClientWidget(QWidget *parent = nullptr);
    ~TCPClientWidget();

private slots:
    void on_startConBtn_clicked();

    void on_sendMsgBtn_clicked();

    void on_stopConBtn_clicked();

private:
    Ui::TCPClientWidget *ui;
    QTcpSocket * m_Socket;
};

#endif // TCPCLIENTWIDGET_H
