
/* now in exception we can throw any datatype and can create  different catches for them and if 
some are unknown datatype  we can use catch(...) but it must be used at last of all catch function
but we should not use catch as it will not tell which datatype we are throwing
*/
#include<iostream>
#include<cstring>
#include<climits>
#include<cmath>
using namespace std;
class MyException:public exception //exception is a built in class not compulsory to use
{};
int main()
{
    int a=10,b,c;
    cin>>b;
    MyException g;
    try
    {
        if(b==0)
        {
            throw string("error");  //for throwing float type throw 1.1f  //for char throw 'a' 
        }                           //double throw 1.2
        else{
            c=a/b;
            cout<<"No error"<<c;
        }
    }
    catch(int z)
    {
        cout<<"Division by zero throwing int";
    }
    catch(float q)
    {
        cout<<"Division bye zero throwing float";
    }
    catch(MyException e)
    {
        cout<<"Division by zero throwing object of class";
    }
    catch(string e)
    {
        cout<<"Division by zero throwing string";
    }
    catch(...)
    {
        cout<<"Catch function";
    }
    cout<<"Bye";
}

