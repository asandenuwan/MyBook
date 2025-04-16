#include "app.h"
#include "ui_app.h"

app::app(QWidget *parent): QMainWindow(parent) , ui(new Ui::app){

    db=new dataBase("databasefile.db");

    V=new QVBoxLayout();

    ui->setupUi(this);
    this->on_showBtn_clicked();
    ui->proBar->setValue(0);
    ui->showFrame->setLayout(V);
    this->makeGuiAnimation();
}

app::~app(){
    for(QPushButton* b:btn){
        b->hide();
        b->deleteLater();
    }
    t->stop=true;
    delete db;
    delete rec;
    delete V;
    delete ui;
}

void app::on_showBtn_clicked(){
    ui->stackedWidget->setCurrentWidget(ui->showData);
    this->data.clear();
    for(QPushButton* b:btn){
        b->hide();
        b->deleteLater();
    }
    btn.clear();

    data=db->getdata();

    int i=0;
    for(QVector<QString> row:data) {
        QPushButton* b=new QPushButton(row[0]+" | "+row[1],ui->showFrame);

        V->addWidget(b);

        b->setFixedHeight(100);
        b->setStyleSheet("font-size: 22px; color: rgb(255, 225, 2);background-color: rgb(36, 36, 109);");
        b->show();
        btn.append(b);
        connect(b,&QPushButton::clicked,[=]{
            qDebug() << "Button clicked: " ;
            openWindow(data[i][1],data[i][2]);
        });
        i++;

    }
}


void app::on_addBtn_clicked(){
    ui->stackedWidget->setCurrentWidget(ui->addData);
}


void app::on_deleteBtn_clicked(){
    ui->stackedWidget->setCurrentWidget(ui->deleteData);
}


void app::on_addDataBtn_clicked()
{   QString t=ui->addTitle->text();
    if(t!=""||t!=" "){
        bool f=db->adddata(t,ui->addDatatextBox->toPlainText());
        if(f){
            qDebug()<<"data added to database";
            ui->addTitle->setText("");
            ui->addDatatextBox->setPlainText("");
        }else{
            qDebug()<<"data adding error";
        }
    }
}


void app::on_enterForDelete_clicked()
{

    int id=ui->deleteRecodeId->text().toInt();
    bool f=db->deleteData(id);
    if(f){
        qDebug()<<"id '"<<id<<"' deleted";
        ui->deleteRecodeId->setText("");
    }else{
        qDebug()<<"delete error";
    }
}

void app::openWindow(QString title, QString data){
    qDebug()<<"title: "<<title<<" data: "<<data;
    dataFrom* f = new dataFrom();
    f->addData(title, data);
    f->show();
}

void app::makeGuiAnimation(){
    QGraphicsScene* sence=new QGraphicsScene(this);
    ui->gv->setScene(sence);
    sence->addEllipse(0,0,200,200,QPen(Qt::red),QBrush(Qt::black));
    rec=sence->addRect(100,100,1,-100,QPen(Qt::green),QBrush(Qt::green));
    rec->setTransformOriginPoint(100,100);

    t=new guithread();
    connect(t,&guithread::T_signal,this,[&](int val){
        if(rec->rotation()==359){rec->setRotation(0);}
        rec->setRotation(rec->rotation()+1);
        ui->proBar->setValue(val/360.0f*100);
    });
    t->start();
}
