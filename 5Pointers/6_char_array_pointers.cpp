
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    char arr[10]={'l','o','v','e'};
    char* ctr=arr;
    cout<<ctr<<"   "<<&arr[1]<<"   "<<&ctr[1]<<"   "<<ctr+2<<endl;  //it prints  character array

    int y[4]={1,2,3,5};
    int* q=y;
    cout<<"  "<<*q<<"  and the location is  "<<q<<endl;  //q gives base address

    int x=10;
    int *p=&x;
    cout<<*p<<endl;
    p=NULL;
    //cout<<"check"<<*p<<endl;  error and stops output
    p=new int [3];
    cout<<*p;
}