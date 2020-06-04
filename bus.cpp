#include "bus.h"

using namespace std;

bus::bus(int seat_place, int speed):transport(seat_place, speed){}

    void bus::busPrint() const
    {
        cout<<"Seat places:"<<getSeat()<<endl<<"Speed:"<<getSpeed()<<endl;
    }


