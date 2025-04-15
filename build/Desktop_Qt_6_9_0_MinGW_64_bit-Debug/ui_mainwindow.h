/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTableWidget *tableWidget;
    QPushButton *sortByTitleButton;
    QPushButton *sortByPriceButton;
    QPushButton *sortByBothButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(500, 400);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(20, 20, 451, 192));
        sortByTitleButton = new QPushButton(centralwidget);
        sortByTitleButton->setObjectName("sortByTitleButton");
        sortByTitleButton->setGeometry(QRect(20, 230, 141, 41));
        sortByPriceButton = new QPushButton(centralwidget);
        sortByPriceButton->setObjectName("sortByPriceButton");
        sortByPriceButton->setGeometry(QRect(180, 230, 141, 41));
        sortByBothButton = new QPushButton(centralwidget);
        sortByBothButton->setObjectName("sortByBothButton");
        sortByBothButton->setGeometry(QRect(340, 230, 141, 41));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Book Sorter", nullptr));
        sortByTitleButton->setText(QCoreApplication::translate("MainWindow", "Sort by Title", nullptr));
        sortByPriceButton->setText(QCoreApplication::translate("MainWindow", "Sort by Price", nullptr));
        sortByBothButton->setText(QCoreApplication::translate("MainWindow", "Sort by Title + Price", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
