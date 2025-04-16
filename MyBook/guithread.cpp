#include "guithread.h"

guithread::guithread() {}

void guithread::run(){
    int i=0;
    while(!stop){
        if(i>=360){i=0;}
        emit T_signal(i);
        msleep(10);
        i++;
    }
}
