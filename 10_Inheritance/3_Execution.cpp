/* Here we want to call and execute constructors 
firstly child class will be called then Parent class will be called but Parent will be executed before Child  
*/

#include <bits/stdc++.h>
using namespace std;
class Parent
{
    public:
    Parent()
    {
        cout<<"Non-param of parent"<<endl;
    }
    Parent(int x)
    {
        cout<<"Param of parent"<<endl;
    }
};
class Child:public Parent       
{
    public:
    Child()
    {
        cout<<"Non-Param of Child"<<endl;
    }
    Child(int x)
    {
        cout<<"Param of child"<<endl;
    }
    
    Child(int a,int x):Parent(x)   
    {
        cout<<"Yes Yes"<<endl;
    }
};
int main()
{
    cout<<"Concept 1"<<endl;
    /* here we have called default constructor Child b so Parent() then Child executed */
    Child b;

    cout<<endl;


    cout<<"Concept 2"<<endl;
    /* here we have called paramatrized constructor Child b(int a) so  Parent() then Child executed 
    but we have not called Parent(int x) so default of Parent will be executed */
    Child c(10);

    cout<<endl;


    cout<<"Concept 3"<<endl;
    /* here we have called paramatrized constructor Child b(int a,int x) so  Parent(int x) 
    then Child(int a) executed*/
    Child d(10,10);
}
