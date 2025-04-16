#ifndef APP_H
#define APP_H

#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QMainWindow>
#include "database.h"
#include <QVector>
#include <QString>
#include <QPushButton>
#include <QVBoxLayout>
#include <QApplication>
#include "datafrom.h"
#include "guithread.h"
#include <QCloseEvent>

QT_BEGIN_NAMESPACE
namespace Ui {
class app;
}
QT_END_NAMESPACE

class app : public QMainWindow{
    Q_OBJECT

public:
    app(QWidget *parent = nullptr);
    ~app();

private slots:
    void on_showBtn_clicked();

    void on_addBtn_clicked();

    void on_deleteBtn_clicked();

    void on_addDataBtn_clicked();

    void on_enterForDelete_clicked();


private:
    guithread* t;
    QGraphicsRectItem* rec;
    void openWindow(QString title, QString data);
    QVBoxLayout* V;
    QVector<QVector<QString>> data;
    QVector<QPushButton*> btn;
    dataBase* db;
    Ui::app *ui;
    void makeGuiAnimation();
};
#endif // APP_H
