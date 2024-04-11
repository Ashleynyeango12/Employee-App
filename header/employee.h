#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QMainWindow>
#include <QObject>
//#include <QSqlQueryModel>
//#include <QBuffer>

//#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QSqlQueryModel>

QT_BEGIN_NAMESPACE
namespace Ui { class Employee; }
QT_END_NAMESPACE

class Employee : public QMainWindow
{
    Q_OBJECT

public:
    Employee(QWidget *parent = nullptr);
    ~Employee();

private slots:
    void on_pushButton_clicked();

    void on_UpdateEmployee_clicked();

    void on_AddEmployee_clicked();

private:
    QSqlDatabase mydb();

private:
    Ui::Employee *ui;
};
#endif // EMPLOYEE_H
