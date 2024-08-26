#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int r=20;
    int const *p=&r;  //r is declared const through pointer p so 
    //*p++;           //error             
    cout<<r++<<endl;  //no error coz it is declared const through pointer not originally
    cout<<*p<<endl;   //no garbage value
    cout<<*p++<<endl;  
    cout<<*p<<endl;   //garbage value
    //*p=20;          // error trying to change the value of r through p
            
    int const q=10;
    //q++; //error bcoz q declared constant here 

    int const *m = &q; // m points to the constant value 10  qis constant through itself and through pointer also here

    // This is not okay: trying to change the value of q through m
    //*m = 20; // error: cannot assign to a constant int
    cout<<*m<<endl;

    int someOtherInt=9;
    // This is okay: changing the value of m itself
    m = &someOtherInt; // m now points to a different memory address
    cout<<*m<<endl;

    const int * const g = &q; //  const *g = &q q is constant   const int const *g  g can only point to address of q i.e. q only
    //g=&someOtherInt;        //error g is a constant pointer can't change it's memory address
    cout<<*g<<endl;

    int rr=100;
    const int* ptrr=&rr;  //same as int* const ptrr=&r
    cout<<"rr ";
    *ptrr++;
    cout<<endl<<*ptrr;
}