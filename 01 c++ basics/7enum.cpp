#include<iostream>
using namespace std;
#include<cstring>
#include<cmath>
enum dayname {mon,tue,wed,thu,fri,sat,sun};
int main() {
    dayname d;
    d=thu;
    // z=++d;      this statement will give error as enum type can't be modified 
    // cout<<z<<endl;
    cout<<"thu is  "<<d<<endl;
    
    return 0;

}