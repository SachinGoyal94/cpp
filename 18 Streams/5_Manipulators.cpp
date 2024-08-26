/* Manipulators are used for enhancing or formatting strings
*/
#include<iostream>
using namespace std;
int main()
{
    cout<<endl<<"\n";   //instead of endl we can use manipulator "\n" to maipulate 
    //for integers we have manipulaotrs like hex oct dec float fixed scientific
    cout<<hex<<163<<endl;  //output is a3
    cout<<11<<endl;  //again hexadecimal

    cout<<fixed<<125.731<<endl;

    //other manipulators are  set()    left   right   ws
}