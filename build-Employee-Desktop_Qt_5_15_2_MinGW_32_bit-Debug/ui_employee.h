/********************************************************************************
** Form generated from reading UI file 'employee.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEE_H
#define UI_EMPLOYEE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Employee
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Employee)
    {
        if (Employee->objectName().isEmpty())
            Employee->setObjectName(QString::fromUtf8("Employee"));
        Employee->resize(640, 416);
        centralwidget = new QWidget(Employee);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 300, 75, 24));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(390, 100, 221, 191));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(verticalLayoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(verticalLayoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 20, 261, 20));
        label->setStyleSheet(QString::fromUtf8("font: 900 italic 12pt \"Segoe UI\";"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 60, 151, 16));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Segoe UI\";"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 100, 49, 16));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(90, 100, 121, 21));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 150, 49, 16));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(90, 150, 121, 22));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 200, 49, 16));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(90, 200, 121, 22));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 240, 49, 16));
        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(90, 240, 121, 22));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 300, 75, 24));
        Employee->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Employee);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 640, 22));
        Employee->setMenuBar(menubar);
        statusbar = new QStatusBar(Employee);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Employee->setStatusBar(statusbar);

        retranslateUi(Employee);
        QObject::connect(pushButton_2, SIGNAL(clicked()), Employee, SLOT(close()));

        QMetaObject::connectSlotsByName(Employee);
    } // setupUi

    void retranslateUi(QMainWindow *Employee)
    {
        Employee->setWindowTitle(QCoreApplication::translate("Employee", "Employee", nullptr));
        pushButton->setText(QCoreApplication::translate("Employee", "Submit", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Employee", "View Employee", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Employee", "Delete Employee", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Employee", "Update Employee", nullptr));
        label->setText(QCoreApplication::translate("Employee", "WELCOME TO EMPLOYEE SHEET", nullptr));
        label_2->setText(QCoreApplication::translate("Employee", "Add Employee Details", nullptr));
        label_3->setText(QCoreApplication::translate("Employee", "ID", nullptr));
        label_4->setText(QCoreApplication::translate("Employee", "NAME", nullptr));
        label_5->setText(QCoreApplication::translate("Employee", "AGE", nullptr));
        label_6->setText(QCoreApplication::translate("Employee", "PHONE", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Employee", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Employee: public Ui_Employee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEE_H
