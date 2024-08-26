//for each loop
//for each loop will not work in pointers 

#include<iostream>
#include<cmath>
using namespace std;
int main() {
int A[3]={1,4,8};   

for(int x:A)  //read it as for each x in A the x here refers to value in array A
{
    cout<<x<<endl;
}

cout<<endl<<endl;

//same code will also work if we write auto in place of datatype of A in for()  

for(auto& x:A)          //here & = reference and use this with auto
{
    cout<<x<<endl;
} 

return 0;
}