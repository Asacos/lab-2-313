#include "steamboat.h"

using namespace std;

class steamboat : public transport
{
private:
    int displacement;
public:

    steamboat()
    {
        displacement=0;
    }

    steamboat(const steamboat &sb)
    {
        displacement=sb.displacement;
    }


    void SetSteamboat (int _dp)
    {
        this->displacement=_dp;
    }

    int GetDis() const
    {
        return displacement;
    }

    void print() const override //warn
    {
        cout<<"Seat places:"<<GetSeat()<<endl<<"Speed:"<<GetSpeed()<<"Displacement:"<<GetDis()<<endl;
    }

    ~steamboat(){}
};
