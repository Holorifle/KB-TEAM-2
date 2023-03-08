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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QFrame *frame_5;
    QTextBrowser *textBrowser_2;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QComboBox *comboBox_4;
    QComboBox *comboBox_5;
    QComboBox *comboBox_6;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QWidget *tab_3;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *lineEdit_4;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox;
    QPushButton *pushButton_6;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_7;
    QCheckBox *checkBox_3;
    QLabel *label_12;
    QTextBrowser *textBrowser_4;
    QLineEdit *lineEdit_5;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QWidget *tab_4;
    QFrame *frame_4;
    QLabel *label_3;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QTextBrowser *textBrowser;
    QPushButton *pushButton_4;
    QTextBrowser *textBrowser_3;
    QLabel *label_5;
    QLabel *label_16;
    QTextEdit *textEdit;
    QLabel *label_17;
    QLabel *label_18;
    QLineEdit *lineEdit_7;
    QPushButton *pushButton_10;
    QCheckBox *checkBox_4;
    QLabel *label_15;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(458, 367);
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::LinkVisited, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        QBrush brush2(QColor(255, 0, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush2);
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush2);
        MainWindow->setPalette(palette);
        QFont font;
        font.setFamilies({QString::fromUtf8("D2Coding")});
        font.setPointSize(12);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(7, 4, 451, 321));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        tabWidget->setPalette(palette1);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("D2Coding")});
        font1.setPointSize(10);
        tabWidget->setFont(font1);
        tab = new QWidget();
        tab->setObjectName("tab");
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        frame_5 = new QFrame(tab_2);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(2, 1, 441, 291));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        textBrowser_2 = new QTextBrowser(frame_5);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(10, 10, 311, 271));
        comboBox = new QComboBox(frame_5);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(327, 10, 61, 22));
        comboBox_2 = new QComboBox(frame_5);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(327, 40, 31, 22));
        comboBox_3 = new QComboBox(frame_5);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName("comboBox_3");
        comboBox_3->setGeometry(QRect(327, 70, 31, 22));
        comboBox_4 = new QComboBox(frame_5);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName("comboBox_4");
        comboBox_4->setGeometry(QRect(327, 100, 51, 22));
        comboBox_5 = new QComboBox(frame_5);
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName("comboBox_5");
        comboBox_5->setGeometry(QRect(327, 130, 61, 22));
        comboBox_6 = new QComboBox(frame_5);
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->setObjectName("comboBox_6");
        comboBox_6->setGeometry(QRect(327, 160, 61, 22));
        pushButton_2 = new QPushButton(frame_5);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(326, 208, 111, 31));
        pushButton_2->setFont(font);
        pushButton_3 = new QPushButton(frame_5);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(326, 251, 111, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("D2Coding")});
        font2.setPointSize(11);
        pushButton_3->setFont(font2);
        label = new QLabel(frame_5);
        label->setObjectName("label");
        label->setGeometry(QRect(392, 14, 31, 16));
        label_4 = new QLabel(frame_5);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(363, 43, 61, 16));
        label_6 = new QLabel(frame_5);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(363, 73, 71, 16));
        label_7 = new QLabel(frame_5);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(381, 103, 61, 16));
        label_8 = new QLabel(frame_5);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(391, 133, 61, 16));
        label_9 = new QLabel(frame_5);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(392, 162, 61, 16));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        label_10 = new QLabel(tab_3);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(323, 220, 21, 20));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("D2Coding")});
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setUnderline(true);
        font3.setKerning(false);
        label_10->setFont(font3);
        label_11 = new QLabel(tab_3);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(323, 248, 21, 16));
        label_11->setFont(font3);
        lineEdit_4 = new QLineEdit(tab_3);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(11, 268, 311, 22));
        checkBox_2 = new QCheckBox(tab_3);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(346, 247, 41, 20));
        checkBox = new QCheckBox(tab_3);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(346, 221, 41, 20));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::LinkVisited, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush2);
        checkBox->setPalette(palette2);
        pushButton_6 = new QPushButton(tab_3);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(390, 243, 41, 24));
        lineEdit_3 = new QLineEdit(tab_3);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(11, 243, 311, 22));
        lineEdit_2 = new QLineEdit(tab_3);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(11, 218, 311, 22));
        pushButton_5 = new QPushButton(tab_3);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(390, 217, 41, 24));
        pushButton_7 = new QPushButton(tab_3);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(390, 268, 41, 24));
        checkBox_3 = new QCheckBox(tab_3);
        checkBox_3->setObjectName("checkBox_3");
        checkBox_3->setGeometry(QRect(346, 270, 41, 20));
        label_12 = new QLabel(tab_3);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(323, 270, 21, 20));
        QPalette palette3;
        QBrush brush4(QColor(85, 255, 127, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        QBrush brush5(QColor(170, 255, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette3.setBrush(QPalette::Active, QPalette::LinkVisited, brush2);
        QBrush brush6(QColor(240, 240, 240, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush2);
        label_12->setPalette(palette3);
        label_12->setFont(font3);
        textBrowser_4 = new QTextBrowser(tab_3);
        textBrowser_4->setObjectName("textBrowser_4");
        textBrowser_4->setEnabled(true);
        textBrowser_4->setGeometry(QRect(11, 16, 311, 191));
        lineEdit_5 = new QLineEdit(tab_3);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(330, 11, 81, 22));
        lineEdit_5->setCursorPosition(0);
        label_13 = new QLabel(tab_3);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(416, 13, 30, 20));
        label_14 = new QLabel(tab_3);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(402, 40, 30, 20));
        lineEdit_6 = new QLineEdit(tab_3);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(330, 38, 71, 22));
        lineEdit_6->setCursorPosition(0);
        pushButton_8 = new QPushButton(tab_3);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(329, 67, 50, 31));
        pushButton_8->setFont(font1);
        pushButton_9 = new QPushButton(tab_3);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(382, 67, 61, 31));
        pushButton_9->setFont(font1);
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        frame_4 = new QFrame(tab_4);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(10, 0, 431, 291));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame_4);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(386, 18, 30, 20));
        pushButton = new QPushButton(frame_4);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(331, 53, 81, 31));
        pushButton->setFont(font1);
        lineEdit = new QLineEdit(frame_4);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(332, 16, 51, 22));
        lineEdit->setCursorPosition(0);
        textBrowser = new QTextBrowser(frame_4);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setEnabled(true);
        textBrowser->setGeometry(QRect(1, 16, 311, 111));
        pushButton_4 = new QPushButton(frame_4);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(331, 97, 81, 30));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("D2Coding")});
        font4.setPointSize(8);
        pushButton_4->setFont(font4);
        textBrowser_3 = new QTextBrowser(frame_4);
        textBrowser_3->setObjectName("textBrowser_3");
        textBrowser_3->setGeometry(QRect(320, 218, 111, 71));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("D2Coding")});
        font5.setPointSize(6);
        textBrowser_3->setFont(font5);
        label_5 = new QLabel(frame_4);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(321, 198, 111, 20));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("D2Coding")});
        font6.setPointSize(7);
        label_5->setFont(font6);
        label_16 = new QLabel(frame_4);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(2, 124, 71, 20));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("D2Coding")});
        font7.setPointSize(9);
        label_16->setFont(font7);
        textEdit = new QTextEdit(frame_4);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(1, 140, 311, 111));
        label_17 = new QLabel(frame_4);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(0, -20, 71, 20));
        label_18 = new QLabel(frame_4);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(2, 0, 91, 20));
        label_18->setFont(font7);
        lineEdit_7 = new QLineEdit(tab_4);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setGeometry(QRect(8, 266, 201, 22));
        pushButton_10 = new QPushButton(tab_4);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(281, 266, 41, 24));
        checkBox_4 = new QCheckBox(tab_4);
        checkBox_4->setObjectName("checkBox_4");
        checkBox_4->setGeometry(QRect(237, 269, 41, 20));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::LinkVisited, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush2);
        checkBox_4->setPalette(palette4);
        label_15 = new QLabel(tab_4);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(212, 268, 21, 20));
        label_15->setFont(font3);
        tabWidget->addTab(tab_4, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 458, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\355\206\265\354\213\240 \354\227\220\353\256\254\353\240\210\354\235\264\355\204\260 Ver 0.1-20230307", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "UDP Setup", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Com 1", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Com 2", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Com 3", nullptr));

        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "8", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "7", nullptr));

        comboBox_3->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("MainWindow", "2", nullptr));

        comboBox_4->setItemText(0, QCoreApplication::translate("MainWindow", "none", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("MainWindow", "even", nullptr));
        comboBox_4->setItemText(2, QCoreApplication::translate("MainWindow", "odd", nullptr));
        comboBox_4->setItemText(3, QCoreApplication::translate("MainWindow", "mask", nullptr));

        comboBox_5->setItemText(0, QCoreApplication::translate("MainWindow", "OFF", nullptr));
        comboBox_5->setItemText(1, QCoreApplication::translate("MainWindow", "RTS/CTS", nullptr));
        comboBox_5->setItemText(2, QCoreApplication::translate("MainWindow", "Xon/Xoff", nullptr));

        comboBox_6->setItemText(0, QCoreApplication::translate("MainWindow", "Free", nullptr));
        comboBox_6->setItemText(1, QCoreApplication::translate("MainWindow", "PS Test", nullptr));
        comboBox_6->setItemText(2, QCoreApplication::translate("MainWindow", "Data", nullptr));
        comboBox_6->setItemText(3, QCoreApplication::translate("MainWindow", "Setup", nullptr));

        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "HWg FW Update", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Port", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Data bit", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Data Size", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Parity", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Flow", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Mode", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Serial", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "F5", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "F6", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "hex", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "hex", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        checkBox_3->setText(QCoreApplication::translate("MainWindow", "hex", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "F7", nullptr));
        lineEdit_5->setText(QString());
        label_13->setText(QCoreApplication::translate("MainWindow", "IP", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "PORT", nullptr));
        lineEdit_6->setText(QString());
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Ping", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "TCP Client", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "PORT", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Listen", nullptr));
        lineEdit->setText(QString());
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\354\210\230\354\213\240\354\260\275 Clear", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Client Connect Status", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Sand Data", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Sand Data", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Receved Data", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        checkBox_4->setText(QCoreApplication::translate("MainWindow", "hex", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "F4", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "TCP Server", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
