/* inheritance means inheriting something
here from parent class data members and functions will be inherited automatically 
like here class child:public Parent     here every function under public of parent will be inherited in 
child  */


#include<bits/stdc++.h>
using namespace std;
class Parent
{
    private:
    int a;
    public:
    void display()
    {
        cout<<"Display of Parent"<<endl;
    }
};
class Child:public Parent       //concept of public parent private parent protected parent explained ahead 
{
    public:
    void show()
    {
        cout<<"Display of Child"<<endl;
    }
};
int main()
{
    Parent c;
    c.display();


    Child b;
    b.display();
    b.show();

}