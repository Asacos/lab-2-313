#include "func.h"
#include "transport.h"

int show_lc(light_car *lc, int n)
{
    if (n==0)
        {
            n=1;
            lc->SetTransport(0, 0);
            lc->SetCar("none");
        }
        lc->print();
        return n;
};

int show_bu(bus *bu, int n)
{
    if (n==0)
        {
            n=1;
            bu->SetTransport(0, 0);
        }
        bu->print();
        return n;
};

int show_pl(plane *pl, int n)
{
    if (n==0)
        {
            n=1;
            pl->SetTransport(0, 0);
            pl->SetPlane(0);
        }
        pl->print();
        return n;
};

int show_sb(steamboat *sb, int n)
{
    if (n==0)
        {
            n=1;
            sb->SetTransport(0, 0);
            sb->SetSteamboat(0);
        }
        sb->print();
        return n;
};

void change_lc(light_car *lc)
{
    int _sp;
    int _st;
    char* _md;
    _md=new char[20];
    cout<<"input speed:"<<endl;
    cin>>_sp;
    cout<<"input seat places:"<<endl;
    cin>>_st;
    cout<<"input model:"<<endl;
    cin>>_md;
    lc->SetTransport(_st, _sp);
    lc->SetCar(_md);
};

void change_bu(bus *bu)
{
    int _sp;
    int _st;
    cout<<"input speed:"<<endl;
    cin>>_sp;
    cout<<"input seat places:"<<endl;
    cin>>_st;
    bu->SetTransport(_st, _sp);
};

void change_pl(plane *pl)
{
    int _tm;
    int _sp;
    int _st;
    cout<<"input speed:"<<endl;
    cin>>_sp;
    cout<<"input seat places:"<<endl;
    cin>>_st;
    cout<<"input time:"<<endl;
    cin>>_tm;
    pl->SetTransport(_st, _sp);
    pl->SetPlane(_tm);
};

void change_sb(steamboat *sb)
{
    int _sp;
    int _st;
    int _dp;
    cout<<"input speed:"<<endl;
    cin>>_sp;
    cout<<"input seat places:"<<endl;
    cin>>_st;
    cout<<"input displacement:"<<endl;
    cin>>_dp;
    sb->SetTransport(_st, _sp);
    sb->SetSteamboat(_dp);
};
