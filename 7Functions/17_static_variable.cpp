/*now see if we don't want global variable then if we use local variable in formal function
it will always produce same output but if we write static g=10 it will work like global variable
the only difference will be it will not remain in memory after that function is deleted */

#include<iostream>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
void fun()
{
    static int g=10; //if static is not used it will always give output 11 when fun()
    g++;             //called in actual function
    cout<<g<<endl;   
}
int main()
{
    fun();
    fun();
    fun();
}

/*#include<iostream>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int g=10; 
void fun()
{
    g++;
    
}
int main()
{
    fun();
    cout<<g<<endl; //output=11
    fun();
    cout<<g<<endl; //output=12
    fun();
    cout<<g<<endl; //output=13
}*/

