/*now look in call by value we want to interchange the data of variables of main function so for that 
we created a formal function but swapping doesn't happened so now we will be interchanging their address 
so for that we created pointer in formal functions and interchanged their address*/


#include<iostream>
using namespace std;  
void swap(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
    cout<<*a<<"   "<<*b<<"     "<<endl;
    cout<<a<<"   "<<b<<"     "<<endl; 
   
}
int main() {
    int x,y;
    x=10;
    y=20;
    swap(&x,&y);
    cout<<&x<<"  "<<&y<<endl;
    cout<<x<<"  "<<y;
}

//see using call by address we can even modify actual parameters also