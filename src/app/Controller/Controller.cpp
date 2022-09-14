#include "Controller.h"

Controller::Controller(Service *serv)
{
    service = serv;
    lightState = LIGHT_OFF;
}

Controller::~Controller()
{
}
#if 1
void Controller::updateEvent(std::string strBtn)
{
    if (strBtn == "modeButton")
    {
        service->updateState("modeButton");
    }
}
#else
void Controller::updateEvent(std::string strBtn)
{
    switch (lightState)
    {
    case LIGHT_OFF:
        if (strBtn == "modeButton") {
            lightState = LIGHT_1;
            view->updateState("StateOn");
        }
        break;

    case LIGHT_1:
        if (strBtn == "modeButton") {
            lightState = LIGHT_2;
            view->updateState("StateOn");
        }
        break;

    case LIGHT_2:
        if (strBtn == "modeButton") {
            lightState = LIGHT_3;
            view->updateState("StateOn");
        }
        break;

    case LIGHT_3:
        if (strBtn == "modeButton") {
            lightState = LIGHT_4;
            view->updateState("StateOn");
        }
        break;

    case LIGHT_4:
        if (strBtn == "modeButton") {
            lightState = LIGHT_5;
            view->updateState("StateOn");
        }
        break;

    case LIGHT_5:
        if (strBtn == "modeButtons") {
            lightState = LIGHT_OFF;
            view->updateState("StateOff");
        }
        break;
    }
}
#endif