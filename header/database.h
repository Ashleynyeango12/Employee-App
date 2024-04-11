#ifndef DATABASE_H
#define DATABASE_H


#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QSqlQueryModel>
#include <QDate>
#include <QDebug>
#include <QImage>
#include <QFileDialog>

#define DATABASE_HOSTNAME   "EmployeeDb"
#define DATABASE_NAME QString("employee.db")

#define TABLE                   "Employee" //
#define TABLE_ID                "id"
#define TABLE_NAME           "name"
#define TABLE_AGE             "age"
#define TABLE_PHONE            "gender"


class Database
{
public:
    Database();

    Q_OBJECT
    Q_PROPERTY(bool errorConnection MEMBER errorConnection NOTIFY errorChanged)


public:
    explicit Database(QObject *parent = 0);
    ~Database();

public:

    Database(const QString& path);

private:
    QSqlDatabase m_db;
    bool errorConnection;


   bool copy(QFile &sfile, QFile &dfile);
   bool replace(QFile &sfile, QFile &dfile);
   bool DBIsPresent(QString BD);

private:
   bool createTable();
   void closeDataBase();

signals:
   void errorChanged();

public slots:


    bool inserIntoTable(const QString &id, const QString &name, const QString &age,const QString &phone);
    bool update(const int id,const QString &name, const QString &age, const QString &phone );
    bool removeRecord(const int id);
    bool insert( const int id,const QString &name, const QString &age, const QString &phone);



};


#endif // DATABASE_H
