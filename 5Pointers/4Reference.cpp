/*confusion clearer
    int x=10 simple variable
    int *p=&x is a pointer 
    int *&z=p   &z is a refernce to p i.e. both are same and now they both refer to a single pointer 
    i.e. & is used for refering p to x   
    */ 
#include<iostream>
using namespace std;
    
int main() {
    int x=10;
    int &p=x;  
/*remember if it's int *x=&p it is a case of pointer not reference 
& means reference &p is a refernce to x i.e. for any change in either p or x it will 
affect each other see file 5more on reference.cpp
and reference will not take any xtra space in memory it's like 1 car 
bought by you is for whole family and will not take xtra space by saying it is used by others also
int &p=y; it will generate error as reference is done for one variable at one time 
not for every variable */


    int y=1;
    int k=y;
    int *i=&k;
    int *b=&y;

    cout<<b<<endl; 

    cout<<i<<endl;
// now see the output although k=y but they both are stored in different locations not in the same one
//so that's why & i.e reference is used to save memory like



    cout<<&p<<endl; //as we have done in pointers that &p will give location of that adrress
                    //which is storing a data
    cout<<&x<<endl;

// now see the output  they both are stored in same locations
//so that's why & i.e reference is used to save memory 
}