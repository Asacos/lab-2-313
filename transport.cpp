#include "transport.h"

using namespace std;

transport::transport()
{
    seat_place=0;
    speed=0;
}
transport::transport(int seat_place, int speed):transport()
    {
        setSeat(seat_place);
        setSpeed(speed);
    }

    int transport::getSeat() const
    {
        return seat_place;
    }

    int transport::getSpeed() const
    {
        return speed;
    }

    bool transport::setSeat(int seat_place)
    {
        this->seat_place=seat_place;
        return true;
    }

    bool transport::setSpeed(int speed)
    {
        this->speed=speed;
        return true;
    }
