#include "steamboat.h"

using namespace std;

  steamboat::steamboat(int seat_place, int speed, int displacement):transport(seat_place, speed){}

    bool steamboat::setDisp(int displacement)
    {
        this->displacement=displacement;
        return true;
    }

    int steamboat::getDisp() const
    {
        return displacement;
    }

    void steamboat::steamboatPrint() const
    {
        cout<<"Seat places:"<<getSeat()<<endl<<"Speed:"<<getSpeed()<<endl<<"Displacement:"<<getDisp()<<endl;
    }
