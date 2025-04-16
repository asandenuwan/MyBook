#ifndef DATAFROM_H
#define DATAFROM_H

#include <QWidget>

namespace Ui {
class dataFrom;
}

class dataFrom : public QWidget
{
    Q_OBJECT

public:
    explicit dataFrom(QWidget *parent = nullptr);
    ~dataFrom();
    void addData(QString title,QString data);

private:
    Ui::dataFrom *ui;
};

#endif // DATAFROM_H
