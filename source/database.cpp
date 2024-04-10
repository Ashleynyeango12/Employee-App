#include "database.h"

#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QSqlQueryModel>
#include <QIODevice>

Database::Database()
{


}




Database::Database(QObject *parent) : QObject(parent), errorConnection(false)
{
   m_db = QSqlDatabase::addDatabase("QSQLITE");
   QFile sfile(QString("assets:/db") + QString("/" + DATABASE_NAME ));
   QFile dfile(QString("./" + DATABASE_NAME ));
   replace(sfile, dfile);
   copy(sfile, dfile);

   if(DBIsPresent(QString("./") + DATABASE_NAME ))
   {
       m_db.setDatabaseName(QString("./") + DATABASE_NAME );
       m_db.open();
       errorConnection = false;
       QSqlQuery r;
       if(!r.exec("foreign_keys = on;"))
       {
           qDebug() << Q_FUNC_INFO << QString::fromUtf8("Error :connected %1").arg(r.lastError().text());
       }
   }
   else
   {
       errorConnection = true;
       qDebug() << Q_FUNC_INFO << QString::fromUtf8("Erreur : unable to connect at %1 !").arg(QCoreApplication::applicationDirPath() + DATABASE_NAME );
   }

   emit errorChanged();

   if (!m_db.open())
   {
      qDebug() << "Error: connection with database failed";
   }
   else
   {
      qDebug() << "Database: connection ok";
   }
}
Database::~Database()
{

}

void Database::closeDatabase()
{
    m_db.close();
}


//Creates a database
bool Database::createTable()
{
    QSqlQuery query;
    if(!query.exec( "CREATE TABLE " + EMPLOYEE + " ("
                            TABLE_ID  "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                            TABLE_NAME     " VARCHAR(255)    NOT NULL,"
                            TABLE_AGE    "  INT NOT NULL   ,"
                            TABLE_PHONE    "  INT NOT NULL   ,"

                        " )"
                    )){
        qDebug() << "DataBase: error of create " << TABLE;
        qDebug() << query.lastError().text();
        return false;
    } else {
        return true;
    }
    return false;
}


//Database insert operations

bool Database::inserIntoTable(const QString &id, const QString &name, const QString &age,const QString &phone)
{


    QSqlQuery query;

        bool success = false;
        if (!name.isEmpty())
        {
            QSqlQuery queryAdd;
            queryAdd.prepare("INSERT INTO " + Employee + " (ID,Name,Age,Phone) VALUES (:ID,:Name,:Age,:Phone)");
            queryAdd.bindValue(":id", id);
            queryAdd.bindValue(":Name", name);
            queryAdd.bindValue(":Age", age);
            queryAdd.bindValue(":Phone", phone);

            if(queryAdd.exec())
                success = true;
            else
                qDebug() << "record could not add: " << queryAdd.lastError();
        }
        else
            qDebug() << "Data is required to insert.";

        return success;
    }


















