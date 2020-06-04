#ifndef STEAMBOAT_H_INCLUDED
#define STEAMBOAT_H_INCLUDED

#include "transport.h"

class steamboat : public transport
{
private:
    int displacement;
public:
    steamboat(int seat_place, int speed, int displacement);

    int getDisp() const;
    bool setDisp(int displacement);

    void steamboatPrint() const;
};

#endif // STEAMBOAT_H_INCLUDED
