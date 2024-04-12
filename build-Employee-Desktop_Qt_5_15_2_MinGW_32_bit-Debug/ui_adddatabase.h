/********************************************************************************
** Form generated from reading UI file 'adddatabase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDATABASE_H
#define UI_ADDDATABASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_AddDatabase
{
public:

    void setupUi(QDialog *AddDatabase)
    {
        if (AddDatabase->objectName().isEmpty())
            AddDatabase->setObjectName(QString::fromUtf8("AddDatabase"));
        AddDatabase->resize(400, 300);

        retranslateUi(AddDatabase);

        QMetaObject::connectSlotsByName(AddDatabase);
    } // setupUi

    void retranslateUi(QDialog *AddDatabase)
    {
        AddDatabase->setWindowTitle(QCoreApplication::translate("AddDatabase", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddDatabase: public Ui_AddDatabase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDATABASE_H
