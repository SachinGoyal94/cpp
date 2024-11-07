//new way of intialising constructor
#include<bits/stdc++.h>
using namespace std;
class sample
{
    private:
    int a,b;
    const int c;
    public:
    sample(int A,int B,int C=0):a(A),b(B),c(C)
    {
        cout<<"old constructor style will not give c=C as it is constant but here by initialising list 'c' can be modified";
    }
    int geta() const
    {
        return a;
    }
    int getb() const
    {
        return b;
    }
};
void printab(const sample &a)   //const here means this function can only use constant functions
{
    cout<<a.geta()<<"   "<<a.getb()<<endl;
}
int main()
{
    sample c(10,11);
    printab(c);
}
