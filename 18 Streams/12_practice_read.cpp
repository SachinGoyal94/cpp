#include <iostream>
#include <fstream>
using namespace std;
class Student
{
    private:
    string name;
    string branch;
    public:
    Student(){}
    Student(string n,string b)
    {
        name=n;
        branch=b;
    }
    friend ofstream & operator<<(ofstream &ofs,Student &s);
    friend ifstream & operator>>(ifstream &ifs,Student &s);
    friend ostream & operator<<(ostream &os,Student &s);
};
ofstream & operator<<(ofstream &ofs,Student &s)
{
    ofs<<s.name<<endl<<s.branch<<endl;
}
ifstream & operator>>(ifstream &ifs,Student &s)
{
    ifs>>s.name;
    ifs>>s.branch;
}
ostream & operator<<(ostream &os,Student &s)
{
    cout<<"Name is  "<<s.name<<endl<<"Branch of Student is  "<<s.branch<<endl;
}
int main()
{
    ofstream ofs("MY.txt",ios::trunc);
    Student Std("Sachin","COE");
    ofs<<Std;
    ifstream ifs("MY.txt");
    ifs>>Std;
    cout<<Std;

}