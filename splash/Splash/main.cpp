#include "mainwindow.h"
#include <QApplication>
#include<QSplashScreen>
#include<QTimer>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    QSplashScreen *splash=new QSplashScreen;
    //splash->setPixmap(QPixmap("C:/picture/KB.jpg"));
    splash->setPixmap(QPixmap("C:/picture/KB.jpg").scaled(QSize(400, 300), Qt::KeepAspectRatio));
    splash->show();

    MainWindow w;

    QTimer::singleShot(1000, splash, SLOT(close()));
    QTimer::singleShot(1000, &w,SLOT(show()));

    return a.exec();
}
