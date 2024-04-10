#include "delete_employee.h"
#include "ui_delete_employee.h"
#include "employee.h"

delete_employee::delete_employee(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::delete_employee)
{
    ui->setupUi(this);
}

delete_employee::~delete_employee()
{
    delete ui;
}

void delete_employee::on_delete_employee_accepted()
{

}


void delete_employee::on_pushButton_2_clicked()
{
    this->close();

    Employee* mainWin = new Employee();
    mainWin->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    mainWin->show();
}

