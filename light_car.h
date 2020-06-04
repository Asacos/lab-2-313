#ifndef LIGHT_CAR_H_INCLUDED
#define LIGHT_CAR_H_INCLUDED

#include "car.h"

class light_car : public car
{
public:
    light_car(int seat_place, int speed, string model);
    void light_carPrint() const;
};

#endif // LIGHT_CAR_H_INCLUDED
