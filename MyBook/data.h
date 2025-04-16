#ifndef DATA_H
#define DATA_H

#include <QWidget>

namespace Ui {
class data;
}

class data : public QWidget
{
    Q_OBJECT

public:
    explicit data(QWidget *parent = nullptr);
    ~data();
    void setData(QString t,QString d);

private:
    Ui::data *ui;
};

#endif // DATA_H
