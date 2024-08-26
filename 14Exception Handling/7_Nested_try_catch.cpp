
/* we can give object or constructor of child class also in throw but the catch of child class 
must be inserted before parent catch  
*/
#include<iostream>
#include<cstring>
#include<climits>
#include<cmath>
using namespace std;
class MyException:exception
{};
class MyExcept:public MyException
{};
int main()
{
    int a=10,b,c,d,e;

    cin>>b>>d;
    MyException g;
    MyExcept l;
    try
    {
        if(b==0)
        {
            throw g;
        }
        else{
            c=a/b;
            cout<<"No error"<<c;
        }
        
        try{
            if(d==0)
            {
                throw 1;
            }
            else{
                e=(a/b)*d;
                cout<<"using nested try catch and output is"<<e;
            }
        }
        catch(int e)
        {
            cout<<"multiplication by zero and throwing child class object"<<e;
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
/*now here when if else condition of b==0 is true i.e. b=0 then compiler will jump to catch of this 
b=0 exception and will ignore nested try and catch as when first condition gets fail how second 
condition can be checked
*/

