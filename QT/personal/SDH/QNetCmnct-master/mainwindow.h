#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTabWidget>
#include "tcpserverwidget.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionClient_triggered();

    void on_actionServer_triggered();

private:
    Ui::MainWindow *ui;
    QTabWidget * m_TabWidget;
    int clientCount;
    int defaultPort;
};
#endif // MAINWINDOW_H
