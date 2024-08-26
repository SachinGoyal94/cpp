#include<iostream>
#include<cmath>
using namespace std;
int main() {
int A[3]={1,4,8};   //[3]=no of elements in array A and position of 1=>0 4=>1 8=>2
cout<<A[1]<<endl;
cout<<"size of A is    "<<sizeof(A)<<endl;  //1element =4 byte 3element =12 bytes

int B[4]={1,2};     //at index 2,3 or value of element 3,4 by default 0 comes as value
cout<<B[2]<<endl<<B[3]<<endl;


char C[3]={'A',66,67};      //char will print character for every corresponding number given

for(int i=0;i<3;i+=1)       //i<3 3 is index value
{
    cout<<C[i]<<endl;
}


float D[4]={2.0f,4.0f,6.0f};    
for(int j=0;j<4;j+=1)       
{
    cout<<D[j]<<endl;
}


//using this for loop is quite difficult  in next module we will be doing for each loop 
return 0;
}