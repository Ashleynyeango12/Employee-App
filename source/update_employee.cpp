#include "update_employee.h"
#include "ui_update_employee.h"
#include "database.h"
#include <QMessageBox>
#include <QSqlQueryModel>

update_Employee::update_Employee(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::update_Employee)

  if (!m_db.open())
  {
     qDebug() << "Error: connection with database failed";
  }

{
    ui->setupUi(this);


        Database conn;
        if(!conn.connOpen()){
           ui->label_6->setText("Failed to open databsae");
        }
        else{
            ui->label_6->setText("Connected........");
        }

}

update_Employee::~update_Employee()
{
    delete ui;
}

void update_Employee::on_update_clicked()
{

         Database conn;
        QString ID,Name,Age,Phone;
        ID=ui->lineEdit->text();
        Name=ui->lineEdit_2->text();
        Age=ui->lineEdit_3->text();
        Phone=ui->lineEdit_4->text();

        if (!m_db.open())
        {
           qDebug() << "Error: connection with database failed";
        }
        else{
            QSqlQuery qry;
             qry.prepare("update Department set ID='"+ID+"',Name='"+Name+"',Age'"+Age+"',Phone'"+Phone+"'where ID='"+ID+"' ");
            if(qry.exec())
            {
                QMessageBox::critical(this,tr("Edit"),tr("Data is updated"));
                conn.connClose();
            }
            else{
                QMessageBox::critical(this,tr("error"),qry.lastError().text());
            }

            }



}

