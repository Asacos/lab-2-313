#ifndef PLANE_H_INCLUDED
#define PLANE_H_INCLUDED

#include "transport.h"

class plane : public transport
{
private:
    int time;
public:
    plane(int seat_place, int speed, int time);

    int getTime() const;
    bool setTime(int time);

    void planePrint() const;
};

#endif // PLANE_H_INCLUDED
