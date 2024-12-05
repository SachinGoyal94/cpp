#include<bits/stdc++.h>
using namespace std;
class Array
{
    int * ptr;
    int size;
    public:
    Array(int *p,int s)
    {
        ptr[0]=p[0];
        ptr[1]=p[1];
        size=s;
    }
    int & operator[] (int i)
    {
        cout<<i<<endl;
        if(i>=size)
            cout<<"oversize";
        return ptr[i];
    }
};
int main()
{
    int p[]={1,2},i=2;
    Array a(p,i);
    a[8]=7; 
}