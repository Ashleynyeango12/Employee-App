#include "view_employee.h"
#include "ui_view_employee.h"
#include "employee.h"
#include "database.h"

view_employee::view_employee(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::view_employee)
{
    ui->setupUi(this);
}

view_employee::~view_employee()
{
    delete ui;

    Employee conn;
    if(!conn.connOpen()){
       ui->label->setText("Failed to open databsae");
    }
    else{
        ui->label->setText("Connected........");
    }
}
