/* we can create many objects of a class and if we want to make a data member whose location is  common
to all objects then this can be done using static and it is a global variable but using scope resolution
we make it only accesible for a particular class 
and these static data members can be accessed using scope resoltuion if they are public
*/


#include<bits/stdc++.h>
using namespace std;
class Test
{
    public:
    static int count; 
    Test()
    {
        count++;
    }   
    static int getcount()  //Static member function can only used for static data members
    {                      
        return count;
    }
};

int Test::count=0;

class testy : public Test
{};

int main()
{
    Test t1;
    cout<<t1.getcount()<<endl;

    testy tt;
    cout<<tt.getcount()<<endl;

    Test t2;
    cout<<t2.getcount();
    
    cout<<endl;


    cout<<"using scope resolution to get value of count "<<endl;
    cout<<Test::count<<endl;
    cout<<Test::getcount();
    cout<<endl; 

    t1.count=25;
    cout<<t2.count;
   
    
}
