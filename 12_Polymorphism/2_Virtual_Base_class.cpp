//as we override in poly. so using base class ptr der. we can get output of overrided function
#include<bits/stdc++.h>
using namespace std;
class BasicCar
{
    public:
    virtual void start()
    {
    cout<<"Car started"<<endl;
    }
};

class AdvanceCar: public BasicCar
{
    public:
    void start()
    {
    cout<<"Done"<<endl;
    }
};

int main()
{
    BasicCar *q=new AdvanceCar();
    q->start();
    //output will be car started but we want output from overrided function so for that using virtual 
    //just type "virtual void start()"  inside BasicCar function to get desired output  

    AdvanceCar p;
    p.BasicCar::start();

    BasicCar e;
    e.start();
}

//for objects of class 
/* base class can use functions of base class only
   derived class can use functions of base using scope resolution
*/

//for Base class pointer derived 
/* 
    base class can use functions of derived class also by using virtual and using pointer to derived class
*/