#include "Listener.h"

Listener::Listener(Button *button, Controller *control, ClockCheck *time)
{
    powerButton = button;
    controller = control;
    timeClock = time;
}

Listener::~Listener()
{
}

void Listener::checkEvent()
{
    if (powerButton->getState() == RELEASE_ACTIVE)
    {
        controller->updateEvent("modeButton");
    }

    if (timeClock->isUpdate())
    {
        controller->updateEvent("clockUpdate");
    }
}