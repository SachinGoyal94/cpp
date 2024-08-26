#include<bits/stdc++.h>
using namespace std;
class Student
{
    private:
    int rollno,phy,chem,math;
    string name;
    public:
    void setRoll(int r)
    {
        if(r>0)
        {
            rollno=r;
        }
        else{

        }
    }   
    void setPhy(int p)
    {
        if(p>=0)
        {
            phy=p;
        }
        else{

        }
    }
    void setChem(int c)
    {
        if(c>=0)
        {
            chem=c;
        }
        else{

        }
    }
    void setMath(int m)
    {
        if(m>=0)
        {
            math=m;
        }
        else{

        }
    }
    int getRoll()
    {
        return rollno;
    }
    int getPhy()
    {
        return phy;
    }
    int getMath()
    {
        return math;
    }
    int Total()
    {
        int total;
        total=(phy+chem+math);
        return total;
    }

    void setName(string NAME)
    {
        name=NAME;
    }

    string getName()
    {
        return name;
    }

    char grade()
    {
        char Grade;

        float average;
        average=Total()/3;
        if(average>=90)
        {
            Grade='A'; 
        }
        else{
            if(average<75)
            {
                Grade='B';
            }
            else{
                cout<<"result pending";
            }
        }
        return Grade;
    }
};
int main()
{
    Student s;
    s.setRoll(5);
    s.setPhy(100);
    s.setChem(100);
    s.setMath(100);
    s.setName("sachin goyal");
    cout<<s.grade()<<endl;
    cout<<s.getName()<<endl;

}