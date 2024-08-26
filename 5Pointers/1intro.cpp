// Notebook


#include<bits/stdc++.h>
using namespace std;
int main() {
    // int p is a data variable
    // int *p is a address variable that is it stores the address of the data
    int x=10;
    int *p=&x;
    cout<<x<<endl; 
    
    
    cout<<&x<<endl;     //&x also give address of data 10 and p will contain address of x and *p give value of x 
   
   
    cout<<p<<endl;      //p will give address 
    
    
    cout<<*p<<endl;     //*p will give value of data not address also called dereferencing
    
    
    
    cout<<&p<<endl;     //&p will give address of *p that is address of variable storing 
                        //address of a data
                        //as p also become a data in itself indirectly (to understand only)

    cout<<"*q is  ";



    int y[4]={1,2,3,5};
    int *q=&y[0];
    cout<<*q<<"  and the location is  "<<q<<endl;

    int *m=y;
    cout<<"m gives base address here as  "<<m<<endl;
    cout<<" y gives "<<y<<endl;

    //copying pointers
    int *k=p;
    cout<<*k<<"   "<<k<<"   "<<&k;

    //pointer to pointers
    int o=10;
    int *ptr1=&o;
    int **ptr2=&ptr1;



}

