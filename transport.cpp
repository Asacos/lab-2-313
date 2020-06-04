#include "transport.h"

using namespace std;

class transport
{
private:
    int seat_place;
    int speed;
public:

    transport()
    {
        seat_place=0;
        speed=0;
    }

    transport(const transport &tr)
    {
        seat_place=tr.seat_place;
        speed=tr.speed;
    }

    void SetTransport(int _st, int _sp)
    {
        this->seat_place=_st;
        this->speed=_sp;
    }

    int GetSeat() const
    {
        return seat_place;
    }

    int GetSpeed() const
    {
        return speed;
    }

    virtual void print() const
    {
        cout<<"Seat places:"<<GetSeat()<<endl<<"Speed:"<<GetSpeed()<<endl;
    }
};
