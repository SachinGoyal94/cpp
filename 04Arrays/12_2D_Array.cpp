#include<iostream>
#include<cstring>
#include<cmath>
#include<climits>
using namespace std;
int main() {
    int A[2][3]={{2,3,5},{1,6,7}};  //[2]=no of rows  3=no of column {2,3,5,1,6,7} is also correct 
    /*for(int i=0;i<2;i+=1)
    {
        for(int j=0;j<3;j+=1)
        {
            cout<<A[i][j]<<"   ";
        }
        cout<<endl;
    } 
    easy method */
for(auto& x:A) // x represnt row in A
    {
        for(auto& y:x)
        {
            cout<<y<<"   ";
        }
        cout<<endl;
    } 
}




/*easy method 
for(auto& x:A) // x represnt row in A
    {
        for(auto& y:x)
        {
            cout<<y<<"   ";
        }
        cout<<endl;
    } */