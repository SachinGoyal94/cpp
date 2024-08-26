//now if we want to store some data and refer it to heap memory then pointer is used
//and address will be return to store in it

#include<iostream>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int * fun()
{
    int *p=new int[5];
    for(int i=0;i<5;i++)
    {
        p[i]=i+1;
    }
    cout<<p<<endl;
    return p;
}
int main()
{
    int *ptr=fun(); //*ptr =fun()  fun returns an array so *ptr act as array 
    for(int i=0;i<5;i++)
    {
        ptr[i]=i+1;
        cout<<ptr[i]<<endl;
    }
    cout<<ptr<<endl;

    int *ptr_1;
    cout<<ptr_1;

    /* now see pointer   ptr refers to whole function fun so their addresses are same but ptr_1 is 
    not refering to fun() so different address
    */

}