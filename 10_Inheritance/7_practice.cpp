#include<bits/stdc++.h>
using namespace std;
class Employee
{
    private:
    int E_id;
    string name;
    public:
    Employee(int e,string n)
    {
        name=n;
        E_id=e;
    }
    string getname()
    {
        return name;
    }
    int getE_id()
    {
        return E_id;
    }
};
class FulltimeEmp:public Employee
{
    private:
    int salary;
    public:
    FulltimeEmp(string n,int e,int s):Employee(e,n)
    {
        salary=s;
    }
    int getsalary()
    {
        return salary;
    }
};

class partialtimeEmp:public Employee
{
    private:
    int wage;
    public:
    partialtimeEmp(string n,int e,int w):Employee(e,n)
    {
        wage=w;
    }
    int getwage()
    {
        return wage;
    }
};
int main()
{
    FulltimeEmp e1("sachin",100001,1000000);
    
    cout<<"Name of Employee is  "<<e1.getname()<<endl;

    cout<<"Employee id is  "<<e1.getE_id<<endl;

    cout<<"Salary of Employee is "<<e1.getsalary()<<endl<<endl<<endl;


    partialtimeEmp e2("harish",100002,200000);

    cout<<"Name of Employee is  "<<e2.getname()<<endl;

    cout<<"Employee id is  "<<e2.getE_id()<<endl;

    cout<<"wage of Employee is "<<e2.getwage()<<endl;

}