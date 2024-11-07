#include<bits/stdc++.h>
using namespace std;
class Rectangle
{
    private:
    int *length,*breadth;
    public:
    Rectangle(int l,int b)
    {
        length=new int(l);
        breadth=new int(b);
    }
    Rectangle (const Rectangle &t)
    {
        length=new int(*t.length);
        breadth=new int(*t.breadth);
    }
    int area()
    {
        return (*length)*(*breadth);
    }
    int getl() const
    {
        return *length;
    }
    int getb() const
    {
        return *breadth;
    }
    int areaas()
    {
        return (getl())*(getb());
    }
    int areas(const Rectangle &t)  //to ensure no changes in data members 
    {
        return (t.getl())*(t.getb());
    }
    ~Rectangle()
    {
        delete length;
        delete breadth;
    }
};
int main()
{
    Rectangle *r=new Rectangle(10,5);
    cout<<r->area()<<"   "<<(r->getl())<<endl;
    cout<<r->areaas()<<endl;
    cout<<r->areas(*r)<<endl;
    Rectangle r2=*r;
    delete r;
    cout<<r2.area()<<"   "<<(r2.getl())<<endl;
}