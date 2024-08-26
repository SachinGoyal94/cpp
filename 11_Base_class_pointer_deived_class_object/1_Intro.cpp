/*  advance car refers to child    basic car refers to Parent class
assume there is a basic car and advanced car which is derived from it and if i will point basic car 
toward any object of advance car(object of advance car means seltos creta) then that pointer will only 
point to that functions or members which are available in basic class 
obviously if it will point towards advanced class members also then how it will remain basic
but advance car cannot even point toward basic car for deriving any function like basic do as explained above
*/
#include<bits/stdc++.h>
using namespace std;
class Parent
{
    public:
    void fun1();
    void fun2();
    void fun3();
};
class Child:public Parent
{
    public:
    void fun4();
    void fun5();
};
int main()
{
    Parent *p;            //pointer of basic car 
    p=new Child();        //pointing towards advance car

//here new Child() allocates memory to heap 
//because the "new" operator in C++ is used to dynamically allocate memory for an object

    p->fun1();
    p->fun2();
    p->fun3();
    //p->fun4();  will give error
    //p->fun5();  will give error
    return 0;
}
/* but if pointer of advance car will point towards basic car it will generate error as we will not be 
able to use advance features like ac mediaplayer keyless entry 
Child *c;
c=new Parent();   //thus error 
*/

