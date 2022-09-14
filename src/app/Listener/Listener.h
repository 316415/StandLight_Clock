#ifndef __LISTENER_H__
#define __LISTENER_H__

#include "Button.h"
#include "Controller.h"
#include "ClockCheck.h"

class Listener
{
private :
    Button *powerButton;
    Controller *controller;
    ClockCheck *timeClock;

public:
    Listener(Button *button, Controller *control, ClockCheck *time);
    ~Listener();
    void checkEvent();
};

#endif /* __LISTENER_H__ */
