#include <iostream>
#include "transport.h"
#include "func.h"

using namespace std;

int main()
{

    light_car lc;
    bus bu;
    plane pl;
    steamboat sb;
    int n[4];
    int i;
    for (i=0; i<4; i++)
        n[i]=0;
    int l=0;
    while (l==0)
    {
        int ch;
        cout<<"Select what to do:\n 1. Show\n 2. Change\n 3. Delete\n 4. Exit"<<endl;
        cin>>ch;
        switch (ch)
        {
        case 1:
            cout<<" What would you like to see?\n  1. transport"<<endl;
            int ch_sh;
            cin>>ch_sh;
            switch (ch_sh)
            {
            case 1:
                cout<<"   What transport would you like to see?\n    1. car\n    2. bus\n    3. plane\n    4. steamboat"<<endl;
                int ch_tr_sh;
                cin>>ch_tr_sh;
                switch (ch_tr_sh)
                {
                case 1:
                    cout<<"     What car would you like to see?\n      1. light car"<<endl;
                    int ch_tr_car_sh;
                    cin>>ch_tr_car_sh;
                    switch (ch_tr_car_sh)
                    {
                    case 1:
                        n[0]=show_lc(&lc, n[0]);
                        break;
                    default:
                        break;
                    }
                    break;
                case 2:
                    n[1]=show_bu(&bu, n[1]);
                    break;
                case 3:
                    n[2]=show_pl(&pl, n[2]);
                    break;
                case 4:
                    n[3]=show_sb(&sb, n[3]);
                    break;
                default:
                    break;
                }
                break;
            default:
                break;
            }
            continue;
        case 2:
            cout<<" What would you like to change?\n  1. Transport"<<endl;
            int ch_ch;
            cin>>ch_ch;
            switch (ch_ch)
            {
            case 1:
                cout<<"   What transport would you like to change?\n    1. car\n    2. bus\n    3. plane\n    4. steamboat"<<endl;
                int ch_tr_ch;
                cin>>ch_tr_ch;
                switch (ch_tr_ch)
                {
                case 1:
                    cout<<"     What car would you like to change?\n      1. light car"<<endl;
                    int ch_tr_car_ch;
                    cin>>ch_tr_car_ch;
                    switch (ch_tr_car_ch)
                    {
                    case 1:
                        change_lc(&lc);
                        break;
                    default:
                        break;
                    }
                    break;
                case 2:
                    change_bu(&bu);
                    break;
                case 3:
                    change_pl(&pl);
                    break;
                case 4:
                    change_sb(&sb);
                    break;
                default:
                    break;
                }
                break;
            default:
                break;
            }
            continue;
        case 3:
            cout<<" What would you like to delete?\n  1. Transport"<<endl;
            int ch_del;
            cin>>ch_del;
            switch (ch_del)
            {
            case 1:
                cout<<"   What transport would you like to delete?\n    1. car\n    2. bus\n    3. plane\n    4. steamboat"<<endl;
                int ch_tr_del;
                cin>>ch_tr_del;
                switch (ch_tr_del)
                {
                case 1:
                    cout<<"     What car would you like to delete?\n      1. light car"<<endl;
                    int ch_tr_car_del;
                    cin>>ch_tr_car_del;
                    switch (ch_tr_car_del)
                    {
                    case 1:
                        n[0]=0;
                        n[0]=show_lc(&lc, n[0]);
                        break;
                    default:
                        break;
                    }
                    break;
                case 2:
                    n[1]=0;
                    n[1]=show_bu(&bu, n[1]);
                    break;
                case 3:
                    n[2]=0;
                    n[2]=show_pl(&pl, n[2]);
                    break;
                case 4:
                    n[3]=0;
                    n[3]=show_sb(&sb, n[3]);
                    break;
                default:
                    break;
                }
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
