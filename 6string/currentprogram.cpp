#include<bits/stdc++.h>
using namespace std;
/*class Student
{
    private:
    int phy,chem,maths,rollno;
    string name;
    char grade;
    public:
    Student(string s,int r,int p,int c,int m)
    {
        setname(s);
        setRoll_no(r);
        setphy(p);
        setchem(c);
        setmaths(m);
    }
    void setname(string s)
    {
        if(s!="")
        {
            name=s;
        }
        else
        {
            name="-1";
        }
    }
    void setphy(int p)
    {
        if(p>=0)
        {
            phy=p;
        }
        else
        {
            phy=-1;
        }
    }
    void setchem(int c)
    {
        if(c>=0)
        {
            chem=c;
        }
        else
        {
            chem=-1;
        }
    }
    void setmaths(int m)
    {
        if(m>=0)
        {
            maths=m;
        }
        else
        {
            maths=-1;
        }
    }
    void setRoll_no(int r)
    {
        if(r>0)
        {
            rollno=r;
        }
        else
        {
            rollno=-1;
        }
    }
    int getrollno()
    {
        return rollno;
    }
    int getphy()
    {
        return phy;
    }
    int getchem()
    {
        return chem;
    }
    int getmaths()
    {
        return maths;
    }
    string getname()
    {
        return name;
    }
    char Grade()
    {
        char grade;
        int total=phy+chem+maths;
        int avg=total/3;
        if(avg>=90)
        {
            grade='A';
        }
        if(avg<90 && avg>=80)
        {
            grade='B';
        }
        if(avg<80 && avg>=70)
        {
            grade='C';
        }
        if(avg<70 && avg>=60)
        {
            grade='D';
        }
        if(avg<60 && avg>=50)
        {
            grade='E';
        }
        return grade;

    }

};
int main()
{
    string name;
    cout<<"Admin Office Entries"<<endl;
    cout<<"Enter name of Student ";
    getline(cin,name);
    int rollno,phy,chem,maths;
    cout<<endl<<"Enter Roll no of Student ";
    cin>>rollno;
    cout<<endl<<"Enter marks in physics of Student ";
    cin>>phy;
    cout<<endl<<"Enter marks in chemistry of Student ";
    cin>>chem;
    cout<<endl<<"Enter marks in maths of Student "<<endl;
    cin>>maths;

    Student s1(name,rollno,phy,chem,maths);
   
    cout<<endl<<"Data of Student is"<<endl;
    cout<<endl<<"Name of the student is : "<<s1.getname()<<endl;
    cout<<endl<<"Roll no of the student is : "<<s1.getrollno()<<endl;
    cout<<endl<<"Score in physics of the student is : "<<s1.getphy()<<endl;
    cout<<endl<<"Score in Chemistry Name of the student is : "<<s1.getchem()<<endl;
    cout<<endl<<"Score in Maths of the student is : "<<s1.getmaths()<<endl;
    cout<<endl<<"Grades obtained by student is : "<<s1.Grade()<<endl;
}*/
/*
class Rational
{
    private :
    int num,den;
    public:
    Rational(int n=0,int d=1)
    {
        num=n;
        setden(d);
    }
    void setden(int d)
    {
        if(d!=0)
        {
            den=d;
        }
        else
        {
            d=INT_MIN;
        }
    }
    friend Rational operator+(Rational &r1,Rational &r2);
    friend void operator<<(ostream &o,Rational &c); 
    //friend ostream & operator<<(ostream &o,Rational &r); 
};                                                        
Rational operator+(Rational &r1,Rational &r2)
{
    Rational R;
    R.num=(r1.num*r2.den)+(r2.num*r1.den);
    R.den=r1.den*r2.den;
    return R;
}
void operator<<(ostream &o,Rational &r)      
{
    o<<r.num<<"   "<<r.den<<endl;
}
int main()
{
    Rational r1(2,3),r2(3,2),r3;
    r3=r1+r2;
    operator<<(cout,r3);
}
*/
/*
class Complex
{
    private:
    int real,img;
    public:
    Complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
    friend Complex operator+(Complex c1,Complex c2);
    friend ostream & operator<<(ostream &o,Complex &c);
};
Complex operator+(Complex c1,Complex c2)
{
    Complex c3;
    c3.real=c1.real+c2.real;
    c3.img=c1.img+c2.img;
    return c3;
}
ostream & operator<<(ostream &o,Complex &c)
{
    o<<c.real<<" + i "<<c.img;
    return o;
}
int main()
{
    Complex c1(2,3),c2(4,5),c3;
    c3=c1+c2;
    operator<<(cout,c3);
}
*/
/*
class Parent
{
    public:
    Parent()
    {
        cout<<"Non param of student";
    }
    Parent(int x)
    {
        cout<<"int Non param of student";
    }

};
class Child:public Parent
{
    public:
    Child()
    {
        cout<<"param of student";
    }
    Child(int x)
    {
        cout<<"int param of student";
    }
    Child(int a,int x):Parent(x)
    {
        cout<<"param of student";
    }
};
int main()
{
    //cout<<i++;  i being constant
    int a={10,20,30,40,50};
    int *p[]={a,a+3,a+4,a+1,a+2};
    int **ptr=p;
    ptr++;
    cout<<ptr-p<<"  "<<**ptr;
}
*/
/*
class Student
{
    private:
    string name,Branch;
    int Rollno ;
    float phy,chem,maths;
    public:
    Student(string n,string b,int rn,float p,float c,float m)
    {
        name=n;
        Branch=b;
        Rollno=rn;
        setphy(p);
        setchem(c);
        setmaths(m);
    }
    void setphy(float p);
    void setchem(float c);
    void setmaths(float m);
    char Grades();
    void showDetails();
};
void Student::setphy(float p)
{
    if(p>=0)
    {
        phy=p;
    }
    else
    {
        phy=-1000.1000;
    }
}
void Student::setchem(float c)
{
    if(c>=0)
    {
        chem=c;
    }
    else
    {
        chem=-1000.1000;
    }
}
void Student::setmaths(float m)
{
    if(m>=0)
    {
        maths=m;
    }
    else
    {
        maths=-1000.1000;
    }
}
char Student::Grades()
{
    float total=phy+chem+maths;
    float avg=total/3;
    char Grade;
    if(avg>95)
    {
        Grade='A';
    }
    if(avg>=90 && avg<95)
    {
        Grade='B';
    }
    if(avg>=80 && avg<90)
    {
        Grade='C';
    }
    if(avg>=70 && avg<80)
    {
        Grade='D';
    }
    if(avg>=60 && avg<70)
    {
        Grade='E';
    }
    if(avg>=50 && avg<60)
    {
        Grade='F';
    }
    if(avg<0)
    {
        Grade='X';
    }
    return Grade;
}
void Student::showDetails()
{
    cout<<"Name of the student is "<<name<<endl;
    cout<<"Branch of the student is "<<Branch<<endl;
    cout<<"Roll no of the student is "<<Rollno<<endl;
    cout<<"marks in physics  "<<phy<<endl;
    cout<<"marks in chemistry  "<<chem<<endl;
    cout<<"marks in maths  "<<maths<<endl;
    cout<<"Grades obtained by student is "<<Grades()<<endl;
}
class Teacher:public Student
{
    private:
    string tname;
    int tid;
    public:
    Teacher(string n,string b,int rn,float p,float c,float m,string tn,int teacherid):Student(n,b,rn,p,c,m)
    {
        tname=tn;
        tid=teacherid;
    }
    void showingDetails();
};
void Teacher::showingDetails()
{
    showDetails();
    cout<<"Name of the Teacher is "<<tname<<endl;
    cout<<"ID of the Teacher is "<<tid<<endl;
}
int main()
{
    Student S("Sachin","Coe",102303557,-90.8,95.2,99.9);
    S.showDetails();
    cout<<endl;
    Teacher T("Sachin","Coe",102303557,90.8,95.2,99.9,"Mukesh",1);
    T.showingDetails();
}
*/
/*
class BasicCar
{
    public:
        virtual void star()
        {
            cout<<"Started"<<endl;
        }
};
class AdvCar:public BasicCar
{
    public:
    
        void star()
        {
            cout<<"Again Started"<<endl;
        }
    
};
int main()
{
    BasicCar p;
    p.star();
    p.AdvCar::star();
}
*/
/*
class Shapes  //area perimeter of rect circle
{
    public:
    virtual float area()=0;
    virtual float peri()=0;
};
class Rectangle:public Shapes
{
    private:
    float length,breadth;
    public:
    Rectangle(float l,float b)
    {
        length=l;
        breadth=b;
    }
    float area()
    {
        return length*breadth;
    }
    float peri()
    {
        return 2*(length+breadth);
    }
};
class Circle:public Shapes
{
    private:
    float radius;
    public:
    Circle(float r)
    {
        radius =r;
    }
    float area()
    {
        return 3.14*radius*radius;
    }
    float peri()
    {
        return 2*3.14*radius;
    }
};
int main()
{
    Shapes *d;
    d=new Rectangle(1.2,2.5);
    cout<<d->area()<<endl;
    cout<<d->peri()<<endl;
    delete[] d;
    
    d=new Circle(2.5);
    cout<<d->area()<<endl;
    cout<<d->peri()<<endl;
}
*/
class Test;
class Base
{
    private:
    int a=0;
    public:
    friend Test;
};
class Test
{
    Base base;
    void fun()
    {
        base.a=9;
    }
};
int main()
{
    Test t;
    cout<<t.a;
}