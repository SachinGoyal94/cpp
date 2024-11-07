#include<bits/stdc++.h>
using namespace std;
class sample
{
    private:
    int a,b,c;
    public:
    sample(int A,int B,int C)
    {
        a=A;
        b=B;
        c=C;
    }
    int geta() const
    {
        return a;
    }
    int getb() const
    {
        return b;
    }
    int getc()
    {
        return c;
    }
};
void printab(const sample &a)   //const here means this function can only use constant functions
{
    cout<<a.geta()<<"   "<<a.getb()<<endl; //<<a.getc()<<endl; error
}
int main()
{
    sample c(10,11,12);
    printab(c);
}
