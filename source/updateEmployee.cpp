#include "updateEmployee.h"
#include "ui_UpdateEmployee.h"

UpdateEmployee::UpdateEmployee(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UpdateEmployee)
{
    ui->setupUi(this);
}

UpdateEmployee::~UpdateEmployee()
{
    delete ui;
}
