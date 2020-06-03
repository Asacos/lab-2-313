#ifndef TRANSPORT_H_INCLUDED
#define TRANSPORT_H_INCLUDED

#include <iostream>
#include <cstring>

using namespace std;

class transport
{
private:
    int seat_place;
    int speed;
public:

   /* transport(const transport &tr)
    {
        seat_place=tr.seat_place;
        speed=tr.speed;
    }
    */
    void SetTransport(int _st, int _sp)
    {
        this->seat_place=_st;
        this->speed=_sp;
    }

    int GetSeat()
    {
        return seat_place;
    }

    int GetSpeed()
    {
        return speed;
    }

    virtual void print()
    {
        cout<<"Seat places:"<<GetSeat()<<endl<<"Speed:"<<GetSpeed()<<endl;
    }
};

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

    char* GetModel()
    {
        return model;
    }
    virtual void print() override
    {
        cout<<"Seat places:"<<GetSeat()<<endl<<"Speed:"<<GetSpeed()<<endl<<"Model:"<<GetModel()<<endl;
    }
};

class light_car : public car
{
    public:
    void print() override
        {
            cout<<"Seat places:"<<GetSeat()<<endl<<"Speed:"<<GetSpeed()<<endl<<"Model:"<<GetModel()<<endl;
        }
};

class bus : public transport
{
public:
    void print() override
    {
        cout<<"Seat places:"<<GetSeat()<<endl<<"Speed:"<<GetSpeed()<<endl;
    }
};

class plane : public transport
{
private:
    int time;
public:

    /*plane(const plane &pl)
    {
        time=pl.time;
    }
    */

    void SetPlane (int _ti)
    {
        this->time=_ti;
    }

    int GetTime()
    {
        return time;
    }

    void print() override //warn
    {
        cout<<"Seat places:"<<GetSeat()<<endl<<"Speed:"<<GetSpeed()<<"Time"<<GetTime()<<endl;
    }
};

class steamboat : public transport
{
private:
    int displacement;
public:

    /*
    steamboat(const steamboat &sb)
    {
        displacement=sb.displacement;
    }
    */

    void SetSteamboat (int _dp)
    {
        this->displacement=_dp;
    }

    int GetDis()
    {
        return displacement;
    }

    void print() override //warn
    {
        cout<<"Seat places:"<<GetSeat()<<endl<<"Speed:"<<GetSpeed()<<"Displacement:"<<GetDis()<<endl;
    }
};

#endif // TRANSPORT_H_INCLUDED
