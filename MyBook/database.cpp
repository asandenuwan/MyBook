#include "database.h"

dataBase::dataBase(QString dataBase) {
    this->db=new QSqlDatabase(QSqlDatabase::addDatabase("QSQLITE","c1"));
    this->db->setDatabaseName(dataBase);
    if (!this->db->open()) {
        qDebug() << "    ;database API: Failed to open database!";
        return;
    }
    this->curser=new QSqlQuery(*db);
    this->maketable();
}


void dataBase::maketable(){
    QString code="CREATE TABLE recode (id INTEGER PRIMARY KEY AUTOINCREMENT, title VARCHAR(255), data TEXT)";
    bool c=this->curser->exec(code);
    if(c){
        qDebug()<<"    ;database API: make new table called recode !";
    }else{
        qDebug()<<"    ;database API: table allready created !";
    }

}

bool dataBase::adddata(QString title, QString data){
    QString code="INSERT INTO recode (title, data) VALUES (:title, :data)";
    this->curser->prepare(code);
    this->curser->bindValue(":title",title);
    this->curser->bindValue(":data",data);

    if(this->curser->exec()){
        return true;
    }
    return false;
}

QVector<QVector<QString>> dataBase::getdata(){
    QString code="SELECT * FROM recode";
    if(!(this->curser->exec(code))){
        qDebug()<<"    ;database API:sql code error !";
    }
    QVector<QVector<QString>> data={};
    QVector <QString> tmp;
    while(this->curser->next()){
        tmp.append(this->curser->value(0).toString());
        tmp.append(this->curser->value(1).toString());
        tmp.append(this->curser->value(2).toString());

        data.append(tmp);
        tmp.clear();
    }
    return data;
}

bool dataBase::deleteData(int id){
    QString code="DELETE FROM recode WHERE id = :id";
    this->curser->prepare(code);
    this->curser->bindValue(":id",id);

    if(this->curser->exec()){
        return true;
    }
    qDebug()<<"    ;databse API:sql code error { "<<this->curser->lastError()<<" } !";
    return false;
}

dataBase::~dataBase(){
    delete db;
    delete this->curser;
}
