#include "plane.h"

using namespace std;

plane::plane(int seat_place, int speed, int time):transport(seat_place, speed){}

    bool plane::setTime(int time)
    {
        this->time=time;
        return true;
    }

    int plane::getTime() const
    {
        return time;
    }

    void plane::planePrint() const
    {
        cout<<"Seat places:"<<getSeat()<<endl<<"Speed:"<<getSpeed()<<endl<<"Time:"<<getTime()<<endl;
    }
