#include "datafrom.h"
#include "ui_datafrom.h"

dataFrom::dataFrom(QWidget *parent): QWidget(parent), ui(new Ui::dataFrom){
    this->ui->setupUi(this);
}

dataFrom::~dataFrom(){
    delete this->ui;
}

void dataFrom::addData(QString title, QString data){
    this->ui->title->setText(title);
    this->ui->data->setPlainText(data);
}
