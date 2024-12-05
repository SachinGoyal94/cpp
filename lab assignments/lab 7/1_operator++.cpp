#include<bits/stdc++.h>
using namespace std;
class lab
{
    int vari;
    public:
    lab(int c=0)
    {
        vari=c;
    }
    // void operator++(int )
    // {
    //     vari++;
    // }
    lab operator++( int )
    {
        lab temp=*this;
        vari++;
        return temp;
    }
    void show()
    {
        cout<<vari<<endl;
    }
    
};
int main()
{
    lab l(10);
    l.show();
    //l++;
    l.show();
    lab k;
    k.show();
    k=l++;
    l.show();
    k.show();

}