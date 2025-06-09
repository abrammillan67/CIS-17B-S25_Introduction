/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *AddItemBtn;
    QPushButton *FindItemBtn;
    QPushButton *RemoveItemBtn;
    QListWidget *listWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(300, 0, 161, 41));
        AddItemBtn = new QPushButton(centralwidget);
        AddItemBtn->setObjectName("AddItemBtn");
        AddItemBtn->setGeometry(QRect(110, 40, 101, 32));
        FindItemBtn = new QPushButton(centralwidget);
        FindItemBtn->setObjectName("FindItemBtn");
        FindItemBtn->setGeometry(QRect(330, 40, 101, 32));
        RemoveItemBtn = new QPushButton(centralwidget);
        RemoveItemBtn->setObjectName("RemoveItemBtn");
        RemoveItemBtn->setGeometry(QRect(550, 40, 101, 32));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(70, 80, 651, 361));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Abram's GUI-Assignment", nullptr));
        AddItemBtn->setText(QCoreApplication::translate("MainWindow", "Add Item", nullptr));
        FindItemBtn->setText(QCoreApplication::translate("MainWindow", "Find Item", nullptr));
        RemoveItemBtn->setText(QCoreApplication::translate("MainWindow", "Remove Item", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
