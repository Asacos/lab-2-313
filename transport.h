#ifndef TRANSPORT_H_INCLUDED
#define TRANSPORT_H_INCLUDED

#include <iostream>
#include <cstring>

using namespace std;

class transport
{
private:
    int seat_place;
    int speed;
protected:
    transport(int seat_place,int speed);
public:
    transport();

    int getSeat() const;
    int getSpeed() const;

    bool setSeat(int seat_place);
    bool setSpeed(int speed);
};

#endif // TRANSPORT_H_INCLUDED
