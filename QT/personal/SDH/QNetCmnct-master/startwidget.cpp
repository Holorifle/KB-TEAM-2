#include "startwidget.h"
#include "ui_startwidget.h"
#include <QDesktopServices>
#include <QPushButton>

StartWidget::StartWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StartWidget)
{
    ui->setupUi(this);

}

StartWidget::~StartWidget()
{
    delete ui;
}

void StartWidget::on_updateBtn_clicked()
{
    QDesktopServices::openUrl(QUrl("https://github.com/blightue/QNetCmnct"));
}

