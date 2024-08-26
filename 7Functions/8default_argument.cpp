#include<iostream>
#include<cstring>
#include<cmath>
#include<climits>
using namespace std;  

//now instead of using template we can use default argument that is like int c=0 
//which become optional for main function like if 2inputs in main then third one=0 
//otherwise if like third =15 then it will also take it as input 
// the only catch here is we have to create different functions for different datatype
int min(int a,int b,int c=0)  //we can make every input as default argument but it must start from 
{                             //right to left without skipping 
    if(a<b && a<c)            // we can even take int c=any value 
    {
        return a;
    }
    else{
        if(b<a && b<c)
        {
            return b;
        }
        else{
            return c;
        }
    }
}
int main()
{
    int x,y,z,k,l;
    x=2;
    y=3;
    z=-46;
    
    k=min(x,y,z);
    cout<<k<<endl;
    
    l=min(x,y);
    cout<<l; //as third input is missing =0 so min=0
    return 0;
}
