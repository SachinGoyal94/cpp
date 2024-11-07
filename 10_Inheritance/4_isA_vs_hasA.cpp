//  isA   vs   has A

#include <bits/stdc++.h>
using namespace std;

class Parent
{
    private:
    int a;
};
/* here  in class child is inheriting from parent class so it has "isA"relationship with parent class
child is a parent*/
class Child:public Parent       
{
    int b;
};
/* here  in class Guardian class is having a object of parent class so it has "hasA" 
relationship with parent class so,
Guardian has a parent*/
class Guardian
{
    Parent c;
};

int main()
{
    cout<<"Explanation over";
}