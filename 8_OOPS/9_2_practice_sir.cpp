#include<iostream>
#include<cmath>
#include<cstring>
#include<climits>
using namespace std;
class Student
{
    private:
    int rollno,phy,chem,math;
    string name;
    public:
    Student(int r,int p,int c,int m,string n)
    {
        rollno=r;
        phy=p;
        chem=c;
        math=m;
        name=n;
    }
    int total()
    {
        int Total;
        Total=phy+chem+math;
        return Total;
    }
    char grade()
    {
        char Grade;

        float average;
        average=total()/3;
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
    int math,chem,phy,rollno;
    string name;
    cout<<"enter name of student";
    getline(cin,name);
    cout<<endl;
    cout<<"Enter marks in maths";
    cin>>math;
    cout<<endl;

    cout<<"Enter marks in chem";
    cin>>chem;
    cout<<endl;
    
    cout<<"Enter marks in phy";
    cin>>phy;
    cout<<endl;

    cout<<"Enter roll no of student";
    cin>>rollno;
    cout<<endl;
    
    Student s(rollno,phy,chem,math,name);
   
    cout<<s.grade()<<endl;

}