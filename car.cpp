#include "car.h"

using namespace std;

class car : public transport
{
private:
    char* model;
public:

    car()
    {
         model=new char[10];
    }

    void SetCar(char* _md)
    {
        int len=strlen(_md);
        this->model=new char[len];
        strcpy(this->model,_md);
    }

    car(const car &c)
    {
        model=c.model;
    }

    char* GetModel() const
    {
        return model;
    }
    virtual void print() const override
    {
        cout<<"Seat places:"<<GetSeat()<<endl<<"Speed:"<<GetSpeed()<<endl<<"Model:"<<GetModel()<<endl;
    }
};
