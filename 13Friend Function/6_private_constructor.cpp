#include<bits/stdc++.h>
using namespace std;
class Box
{
    int width;
    Box(int w)
    {
        width=w;
    }
    public:
    int getwidth()
    {
        return width;
    }
    friend class BoxFactory;
};
class BoxFactory
{
    int count;
    public:
    Box getBox(int w)
    {
        count++;
        return Box(w);
    }
};
int main()
{
    BoxFactory bfact;
    Box b=bfact.getBox(5);
    cout<<b.getwidth();
}