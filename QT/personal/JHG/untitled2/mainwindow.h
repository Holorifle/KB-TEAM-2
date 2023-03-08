#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpServer>
#include <QTcpSocket>
#include <QTabWidget>
#include <QDialog>

///#include <QSerialPort>
///#include <QSerialPortInfo>

class QLabel;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void onNewConnection();
    void onSocketStateChanged(QAbstractSocket::SocketState socketState);
    void onReadyRead();

private slots:
    void on_pushButton_4_clicked();
    void on_pushButton_clicked();
    void on_pushButton_10_clicked();

private:
    Ui::MainWindow *ui;

    QTcpServer          _server;
    QList<QTcpSocket*>  _sockets;
    bool isRPi = true;
    bool isTCP = false;

private :
    QTimer *timer;
};

#endif // MAINWINDOW_H
