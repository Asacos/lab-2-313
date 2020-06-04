#include "car.h"

using namespace std;

    car::car(int seat_place, int speed, string model):transport(seat_place, speed){}

    bool car::setModel(string model)
    {
        this->model=model;
        return true;
    }

    string car::getModel() const
    {
        return model;
    }

    void car::carPrint() const
    {
        cout<<"Seat places:"<<getSeat()<<endl<<"Speed:"<<getSpeed()<<endl<<"Model:"<<getModel()<<endl;
    }

