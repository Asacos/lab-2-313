#include <iostream>
#include "transport.h"
#include "car.h"
#include "light_car.h"
#include "bus.h"
#include "plane.h"
#include "steamboat.h"

using namespace std;

int main()
{

    transport *tr;
    int l=0;
    while (l==0)
    {
        int wk;
        cout<<"Select transport:\n 1. car\n 2.bus\n 3. plane\n 4. steamboat"<<endl;
        cin>>wk;
        switch (wk)
        {
        case 1:
            int wk2;
            cout<<" Select car:\n  1. light_car"<<endl;
            cin>>wk2;
            switch (wk2)
            {
            case 1:
                tr=new light_car(0, 0, "none");
                break;
            default:
                continue;
            }
        case 2:
            tr=new bus(0,0);
            break;
        case 3:
            tr=new plane(0, 0, 0);
            break;
        case 4:
            tr=new steamboat(0, 0, 0);
            break;
        default:
            continue;
        }
        int ch;
        cout<<"Select what to do:\n 1. Show\n 2. Change\n 3. Delete\n 4. Exit"<<endl;
        cin>>ch;
        switch (ch)
        {
        case 1:
            switch (wk)
                {
                case 1:
                    tr.light_carPrint();
                    break;
                case 2:
                    tr.busPrint();
                    break;
                case 3:
                    tr.planePrint();
                    break;
                case 4:
                    tr.steamboatPrint();
                    break;
                default:
                    break;
                }
            continue;
        case 2:
            int _sp;
            int _st;
            cout<<"Input Speed:"<<endl;
            cin>>_sp;
            cout<<"Input Seat places:"<<endl;
            cin>>_st;
            switch(wk)
                {
                case 1:
                    string _mod;
                    cout<<"Input Model:"<<endl;
                    cin>>_mod;
                    tr=new light_car(_sp, _st, _mod);
                    break;
                case 2:
                    tr=new bus(_sp, _st);
                    break;
                case 3:
                    int _tm;
                    cout<<"Input time:"<<endl;
                    cin>>_tm;
                    tr=new plane(_sp, _st, _tm);
                    break;
                case 4:
                    int _dp;
                    cout<<"Input Displacement:"<<endl;
                    cin>>_dp;
                    tr=new steamboat(_sp, _st, _dp);
                    break;
                default:
                    break;
                }
            continue;
        case 3:
            switch (wk)
                {
                case 1:
                    tr=new light_car(0, 0, "none");
                    break;
                case 2:
                    tr=new bus(0,0);
                    break;
                case 3:
                    tr=new plane(0, 0, 0);
                    break;
                case 4:
                    tr=new steamboat(0, 0, 0);
                    break;
                default:
                    break;
            }
            continue;
        case 4:
            l=1;
            break;
        default:
            continue;
        }
    }
    return 0;
}
