/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QComboBox *comboBox_4;
    QComboBox *comboBox_5;
    QComboBox *comboBox_6;
    QTextBrowser *textBrowser;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_7;
    QLineEdit *lineEdit;
    QPushButton *pushButton_5;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(666, 335);
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 40, 49, 16));
        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 70, 61, 16));
        label_3 = new QLabel(Widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 100, 61, 16));
        label_4 = new QLabel(Widget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 130, 49, 16));
        label_5 = new QLabel(Widget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(50, 160, 49, 16));
        label_6 = new QLabel(Widget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(50, 190, 81, 16));
        comboBox = new QComboBox(Widget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(130, 40, 69, 22));
        comboBox_2 = new QComboBox(Widget);
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(130, 70, 69, 22));
        comboBox_3 = new QComboBox(Widget);
        comboBox_3->setObjectName("comboBox_3");
        comboBox_3->setGeometry(QRect(130, 100, 69, 22));
        comboBox_4 = new QComboBox(Widget);
        comboBox_4->setObjectName("comboBox_4");
        comboBox_4->setGeometry(QRect(130, 130, 69, 22));
        comboBox_5 = new QComboBox(Widget);
        comboBox_5->setObjectName("comboBox_5");
        comboBox_5->setGeometry(QRect(130, 160, 69, 22));
        comboBox_6 = new QComboBox(Widget);
        comboBox_6->setObjectName("comboBox_6");
        comboBox_6->setGeometry(QRect(130, 190, 141, 22));
        textBrowser = new QTextBrowser(Widget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(280, 40, 351, 192));
        lineEdit_2 = new QLineEdit(Widget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(280, 250, 261, 22));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(560, 250, 75, 24));
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(50, 260, 75, 24));
        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(150, 260, 75, 24));
        pushButton_4 = new QPushButton(Widget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(90, 290, 81, 24));
        label_7 = new QLabel(Widget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(50, 220, 49, 16));
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(150, 220, 71, 22));
        pushButton_5 = new QPushButton(Widget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(550, 10, 75, 24));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Port", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Baud Rate", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "Data Bits", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "Stop Bits", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "Parity", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "Flow Control", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "Send", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "Connect", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "Disconnect", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Widget", "Refresh Ports", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "Code", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Widget", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
