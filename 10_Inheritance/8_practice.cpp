#include<bits/stdc++.h>
using namespace std;
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