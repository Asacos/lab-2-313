#include "light_car.h"

using namespace std;

class light_car : public car
{
    public:

        light_car(){}

    void print() const override
        {
            cout<<"Seat places:"<<GetSeat()<<endl<<"Speed:"<<GetSpeed()<<endl<<"Model:"<<GetModel()<<endl;
        }

    ~light_car(){}
};
