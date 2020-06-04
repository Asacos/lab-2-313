#include "plane.h"

using namespace std;

class plane : public transport
{
private:
    int time;
public:

    plane()
    {
        time=0;
    }

    plane(const plane &pl)
    {
        time=pl.time;
    }


    void SetPlane (int _ti)
    {
        this->time=_ti;
    }

    int GetTime() const
    {
        return time;
    }

    void print() const override //warn
    {
        cout<<"Seat places:"<<GetSeat()<<endl<<"Speed:"<<GetSpeed()<<"Time"<<GetTime()<<endl;
    }

    ~plane(){}
};
