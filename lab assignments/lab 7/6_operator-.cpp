#include<bits/stdc++.h>
using namespace std;
class Test
{
    private:
    int value;
    public:
    Test(int v=0)
    {
        value=v;
    }
    Test operator-()
    {
        value-=5;
    }
    //friend void operator-(Test &x1);
    void show()
    {
        cout<<"value = "<<value<<endl;
    }
};
// void operator-(Test & x1)
// {
//     x1.value-=x1.value;
// }
int main()
{
    Test x1(10);
    -x1;
    x1.show();
}