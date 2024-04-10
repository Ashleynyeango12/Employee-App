#include "employee.h"
#include "ui_employee.h"
#include "update_employee.h"
#include <QLabel>
#include "database.h"
#include <QSqlQueryModel>
#include <QMessageBox>

Employee::Employee(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Employee)
{
    ui->setupUi(this);





}

Employee::~Employee()
{
    delete ui;
}


void Employee::on_pushButton_clicked()
{

}


void Employee::on_UpdateEmployee_clicked()
{
    hide();
  update_Employee update_Employee;
  update_Employee.setModal(true);
  update_Employee.exec();

}


void Employee::on_AddEmployee_clicked()
{

        QString ID,Name,Age,Phone;
        ID=ui->lineEdit->text();
        Name=ui->lineEdit_2->text();
        Age=ui->lineEdit_3->text();
        Phone=ui->lineEdit_4->text();




        if(!m_db.open()){
            qDebug()<<"Failed to open the database";
            return;
        }
        else{

            QSqlQuery qry;
             qry.prepare("insert into  Employee (ID,Name,Age, Phone) values('"+ID+"','"+Name+"','"+Age+"','"+Phone+"')");
            if(qry.exec())
            {
                QMessageBox::critical(this,tr("Saved"),tr("Data is saved"));
                connClose();
            }
            else{
                QMessageBox::critical(this,tr("error"),qry.lastError().text());
            }

            }



}

