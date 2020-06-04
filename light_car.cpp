#include "light_car.h"

using namespace std;

light_car::light_car(int seat_place, int speed, string model):car(seat_place, speed, model){}

    void light_car::light_carPrint() const
    {
        cout<<"Seat places:"<<getSeat()<<endl<<"Speed:"<<getSpeed()<<endl<<"Model:"<<getModel()<<endl;
    }
