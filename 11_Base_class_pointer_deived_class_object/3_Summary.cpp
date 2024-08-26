#include<iostream>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
class BasicCar
{
public:
 void start()
 {
 cout<<"Car started"<<endl;
 }
};
class AdvanceCar: public BasicCar
{
public:
 void playMusic()
 {
 cout<<"Music Playing"<<endl;
 }
};
int main()
{
    BasicCar *p;
    AdvanceCar q;
    p=&q;
    p->start();

    //p->playMusic(); //error

    
    BasicCar e; 
    //AdvanceCar *d=&e; //error

}