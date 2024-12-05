//suppose you are given a data in celsius but you want in farnaheit
#include<bits/stdc++.h>
using namespace std;
class Celsius
{
    private:
    int celsius;
    public:
    Celsius(int cd=0)
    {
        celsius=cd;
    }
    operator float()
    {
        float fer=((9*celsius)/5)-32;
        return fer;
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
    float f=c;
    cout<<f;
}