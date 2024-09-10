#include<bits/stdc++.h>
using namespace std;
class sample
{
    private:
    int a,b;
    public:
    sample(int A,int B)
    {
        a=A;
        b=B;
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
