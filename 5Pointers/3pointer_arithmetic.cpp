//Notebook


#include<iostream>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int main() {
    int y[5]={1,2,3,4,5};
    //int *p=y;     when *p is used to refer whole array dont use &
    int *p=&y[0]; //when *p is used to refer single element array  use &
    cout<<p<<"    "<<*p<<endl;


    p++;
    cout<<p<<"     "<<*p<<endl;
    
    
    p--;
    cout<<p<<"     "<<*p<<endl;


    p=p+2;  
    cout<<p<<"     "<<*p<<endl;
//alternative of above  statement is cout<<p[2] output is  3   as p[2]=p+2 
//and cout<<p[2]<<*p then output is 3 1 as for p[2]gives value on index not any algebric operation
//for  *p will give output on the basis of p--


    p=p-2;
    cout<<p<<"     "<<*p<<endl;


    int *q=&y[2];
    cout<<q<<"    "<<*q<<endl;


    int d=q-p;
    cout<<d<<endl;  // address of 1 is 0x61fef0 and address of 3(on onlinegdb) is 0x61fef8 ,
                    //int size=4 so 8-0/4=2 


    
    int e=p-q;
    cout<<e<<endl;  // address of 1 is 0x61fef0 and address of 3 is 0x61fef8 so 0-8/4=-2  
    

    
    


}