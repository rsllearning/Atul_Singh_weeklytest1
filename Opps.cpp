#include <bits/stdc++.h>

using namespace std;

class vehicle
{
    public:
    int no_of_wheels;
    
    virtual check()=0;
    
};


class motored_vehicle : public vehicle
{
    public:
    
    int seats;
    int vehicle_id;
    
    
    void lights();
    void forwardv();
    void backwardv();
};

class non_motored_vehicle : public vehicle
{
    
      public :
    
      string vehicle_colour;
      void movec();
      void pedal();
};

class honda_car:public motored_vehicle
{
    public:
    
    int tank_capacity;
    
    void start();
    void stop();
    int cal_milage();
};



class tesla_car:public motored_vehicle
{
    public:
    
    int battery_capacity;
    
    void start();
    void stop();
    int cal_milage();
};



int main()
{
     nag obj;
     obj.display();

    return 0;
}

