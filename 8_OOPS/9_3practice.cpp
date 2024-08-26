#include<iostream>
#include<fstream>
#include<cstring>
#include<climits>
#include<cmath>
using namespace std;
class Student
{
    private:
    string name,branch;
    float phy,chem,maths;
    public:
    Student(string n,string b,float p,float c,float m)
    {
        name=n;
        branch=b;
        setphy(p);
        setchem(c);
        setmath(m);
    }
    void setphy(float p)
    {
        if(p>=0)
        {
            phy=p;
        }
        else{
            cout<<"Error while validating phy marks"<<endl;
        }
    }
    void setchem(float c)
    {
        if(c>=0)
        {
            chem=c;
        }
        else{
            cout<<"Error while validating chem marks"<<endl;
        }
    }
    void setmath(float m)
    {
        if(m>=0)
        {
            maths=m;
        }
        else{
            cout<<"Error while validating maths marks"<<endl;
        }
    }
    void display()
    {
        cout<<"name of student is "<<name<<endl<<"branch is "<<branch<<endl;
        cout<<"marks in phy is "<<phy<<endl<<"marks in chem is "<<chem<<endl<<"marks in maths is  "<<maths<<endl;
        cout<<"Total marks are "<<Total()<<endl;
        cout<<"avg marks are "<<avg()<<endl;
        cout<<"Grades are "<<Grade()<<endl;
        cout<<endl;
    }
    float Total()
    {
        float Total=phy+chem+maths;
        return Total;
    }
    float avg()
    {
        float avg=Total()/3;
        return avg;
    }
    string Grade() //for char A+ B+ can't be written as A+ is of 2characters not 1 character
    {
        string Grade;
        float AVG=avg();
        if(AVG>=95 && AVG<=100)
        {
            Grade="A+";
        }
        if(AVG>=85 && AVG<95)
        {
            Grade="A-";
        }
        if(AVG>=70 && AVG<85)
        {
            Grade="B+";
        }
        if(AVG>=60 && AVG<70)
        {
            Grade="B-";
        }
        if(AVG>=50 && AVG<60)
        {
            Grade="C+";
        }
        if(AVG>=33 && AVG<50)
        {
            Grade="C-";
        }
        if(AVG>=0 && AVG<33)
        {
            Grade="F";
        }
        return Grade;
    }
};
int main()
{
    Student s("Sachin","COE",100,90,80);
    s.display();
}


