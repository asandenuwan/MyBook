#ifndef DATABASE_H
#define DATABASE_H

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QString>
#include <QVector>
#include <QDebug>
#include <QtSql/QSqlError>

class dataBase{

private:
    QSqlQuery* curser;
    QSqlDatabase* db;
    void maketable();
public:
    dataBase(QString databaseName);
    bool adddata(QString title,QString data);
    QVector<QVector<QString>> getdata();
    bool deleteData(int id);
    ~dataBase();
};

#endif // DATABASE_H
