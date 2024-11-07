//now in a program we may need to use same class name or function name for that namespace is used

#include<iostream>
#include<cstring>
#include<cmath>
#include<climits>
using namespace std;
namespace First
{
    void fun()
    {
        cout<<"First"<<endl;
    }
}

namespace Second
{
    void fun()
    {
        cout<<"Second"<<endl;
    }
}
int main()
{
    First::fun();
    Second::fun();
    std::cout<<"If not using using namespace std; you have to use this std:cout<<";
}


/*alternative

namespace First
{
    void fun()
    {
        cout<<"First"<<endl;
    }
}

namespace Second
{
    void fun()
    {
        cout<<"Second"<<endl;
    }
}

using namespace First;
int main()
{
    Second::fun();   //output is second    
    fun();        //output is first 
    std::cout<<"If not using using namespace std; you have to use this std:cout<<";
}

*/