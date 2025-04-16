#ifndef GUITHREAD_H
#define GUITHREAD_H

#include <QThread>
#include <QObject>

class guithread:public QThread
{ Q_OBJECT
public:
    bool stop=false;
    guithread();
private:
    void run()override;
signals:
    void T_signal(int val);
};

#endif // GUITHREAD_H
