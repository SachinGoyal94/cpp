//serialization means to store and retrieve data 

//now if i have to add data of many students like name rollno then it's difficult to add it 
//like done in 1_writing so serialization is used and same for retrieving also 

#include<iostream>
#include<cstring>
#include<cmath>
#include<climits>
#include<fstream>
using namespace std;
class Student
{
    private:
    string Name;
    string branch;
    int roll_no;
    public:
    Student()  //default constructor is must 
    {}
    Student(string n,string b,int r)
    {
        Name=n;
        branch=b;
        roll_no=r;
    }
    friend ofstream & operator<<(ofstream &ofs,Student &s); 
    friend ifstream & operator>>(ifstream &ifs,Student &s); 
    friend ostream & operator<<(ostream &os,Student &s); //ostream => output stream
};

ofstream & operator<<(ofstream &ofs,Student &s)
{
    ofs<<s.Name<<endl;
    ofs<<s.branch<<endl;
    ofs<<s.roll_no<<endl;
}

ifstream & operator>>(ifstream &ifs,Student &s)
{
    ifs>>s.Name>>s.branch>>s.roll_no;
}

ostream & operator<<(ostream &os,Student &s)
{
 os<<"Name "<<s.Name<<endl;
 os<<"Roll "<<s.roll_no<<endl;
 os<<"Branch "<<s.branch<<endl;
 return os;
}

int main()
{
    ofstream ofs("Test.txt");
    Student s1("John","COE",11);
    ofs<<s1;
    ofs.close();

    ifstream ifs("Test,txt");
    ifs>>s1;

    cout<<s1;


}