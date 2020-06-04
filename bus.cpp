#include "bus.h"

using namespace std;

class bus : public transport
{
public:

    bus(){}

    void print() const override
    {
        cout<<"Seat places:"<<GetSeat()<<endl<<"Speed:"<<GetSpeed()<<endl;
    }

    ~bus(){}
};
