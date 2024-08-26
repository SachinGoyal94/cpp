
/* we can give object or constructor of child class also in throw but the catch of child class 
must be inserted before parent catch  as parent class will handle catch of child class also
*/
#include<iostream>
#include<cstring>
#include<climits>
#include<cmath>
using namespace std;
class MyException:public exception
{};
class MyExcept:public MyException
{};
int main()
{
    int a=10,b,c;

    cin>>b;
    MyException g;
    MyExcept l;
    try
    {
        if(b==0)
        {
            throw l;
        }
        else{
            c=a/b;
            cout<<"No error"<<c;
        }
    }
    
    catch(MyExcept e)
    {
        cout<<"Divison by zero throwing child class object";
    }
    catch(MyException e)
    {
        cout<<"Division by zero throwing object of parent class";
    }
    catch(...)
    {
        cout<<"Catch function";
    }
    cout<<"Bye";
}


