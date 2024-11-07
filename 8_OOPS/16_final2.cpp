#include<bits/stdc++.h>
using namespace std;
class Student
{
    private:
    int a, *b;
    public:
    Student(int x,int y)
    {
        a=x;
        b=new int (y);
    }
    int geta() const
    {
        return a;
    }
    int getb()
    {
        return *b;
    }
    Student(const Student &s)
    {
        a=s.a;
        b=new int (*s.b);
    }  

    ~Student()
    {
        delete b;
        cout<<"destructor called"<<endl;
    }
};

void constants(const Student &s)
{    
    cout<<s.geta()<<endl;
}

class stats
{
    public:
    stats()
    {
        cout<<"static constructor called"<<endl;
    }
    ~stats()
    {
        cout<<"static destructor called"<<endl;
    }
    void display()
    {
        cout<<"static display"<<endl;
    }
};
class globe
{
    public:
    globe()
    {
        cout<<" global constructor called"<<endl;
    }
    ~globe()
    {
        cout<<"global destructor called"<<endl;
    }
    
};
void forstatic()
{
    static stats mystatic;
    mystatic.display();
}
static globe myglobe;
int main()
{
    Student *s=new Student(10,20);
    cout<<s->geta()<<"     "<<s->getb()<<endl;
    constants(*s);
    Student *s1(s);
    cout<<s->geta()<<"     "<<s->getb()<<endl;
    constants(*s);
    forstatic();
    forstatic();
}