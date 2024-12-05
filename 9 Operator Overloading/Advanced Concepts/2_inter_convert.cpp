//suppose we have 2 data types and we want to inter convert them
#include<bits/stdc++.h>
using namespace std;
class farnheit
{
    private:
    float farn;
    public:
    farnheit(int f=0)
    {
        farn=f;
    }
    void show()
    {
        cout<<"temp in faranheit is "<<farn<<endl;
    }
};
class Celsius
{
    private:
    int celsius;
    public:
    Celsius(int cd=0)
    {
        celsius=cd;
    }
    operator farnheit()
    {
        float fer=((9*celsius)/5)-32;
        return farnheit(fer);
    }
    void show()
    {
        cout<<"temp is "<<celsius<<endl;
    }
};
int main()
{
    Celsius c(5);
    c.show();
    farnheit fer=c;
    fer.show();
}