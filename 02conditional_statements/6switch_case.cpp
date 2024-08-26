#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
enum dayname {mon,tue,wed,thu,fri};
int main() {
dayname day;
day=mon;
switch(day)
{
    case mon:cout<<"one";   //as we know mon=0 we can also write case 1 case 2 and so on
    break;
    case tue:cout<<"two";
    break;
    case wed:cout<<"three";
    break;
    case thu:cout<<"four";
    break;
    default: cout<<"invalid input"; 
}               //make default as comment and give same input you will get no output no error
return 0;
}
//give space b/w case 1 otherwise case will be treated as comment
//if break is not used in case tue below cases will get print until break applied
//enum is just used here to make it high level program it can be simply explained as below 
//int day;
/*  cin>>day;
    switch(day)
    {
        case 1: cout<<"sun";
            break;
        case 2: cout<<"mon";
            break;
        case 3: cout<<"tue";
            break;
        case 4: cout<<"wed";
            break;
        case 5: cout<<"thu";
            break;
        case 6: cout<<"fri";
            break;
        case 7: cout<<"sat";
            break;
        default: cout<<"invalid day number";
    }
return 0;*/