#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED

#include "transport.h"

class car : public transport
{
private:
    string model;
public:
    car(int seat_place, int speed, string model);

    string getModel() const;
    bool setModel(string model);

    void carPrint() const;
};

#endif // CAR_H_INCLUDED
