#include<bits/stdc++.h>
using namespace std;
//float to userdefined 
class Test
{
    private:
    int value;
    public:
    Test(int v=0)
    {
        value=v;
    }
    void show()
    {
        cout<<"value = "<<value<<endl;
    }
};
int main()
{
    float f=10.2;
    Test x1(10.2);
    x1.show();
}

//user defined to int
// class Test
// {
//     private:
//     float value;
//     public:
//     Test(float v=0)
//     {
//         value=v;
//     }
//     operator int()
//     {
//         float fer=value;
//         return fer;
//     }
//     void show()
//     {
//         cout<<"value = "<<value<<endl;
//     }
// };
// int main()
// {
//     Test x1(10.2);
//     int f=x1;
//     x1.show();
//     cout<<f;
// }