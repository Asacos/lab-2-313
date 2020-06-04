#ifndef BUS_H_INCLUDED
#define BUS_H_INCLUDED

#include "transport.h"

class bus : public transport
{
public:
    bus(int seat_place, int speed);
    void busPrint() const;
};

#endif // BUS_H_INCLUDED
