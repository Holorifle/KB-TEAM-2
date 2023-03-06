#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_login_clicked()
{
    QString id = ui ->lineEdit_ID->text();
    QString password = ui ->lineEdit_2_password->text();

    if(id == "test" && password == "test")
    {
        QMessageBox::information(this,"Login","ID and Password is correct");
        hide();
        SecDialog = new secDialog(this);
        SecDialog->show();
    }
    else
    {
        QMessageBox::warning(this,"Login","ID and Password is not correct");
    }
}

