
// #define are callerd preprocessors or macros and is used to give instruction
// to compiler before the program is start
// it will not consume any memory like int x=10 here x in consuming memory
// They are processed before compilation
// They are used for defining symbolic constant
// They are used for defining functions
// They also support conditional definition


#define PI 3.1425
#define c  cout  //now we can either use c or cout both are same thing
#define SQR(x) x*x
#define MSG(x)  #x   //single # means ""
#define Max(a,b) (a>b?a:b)  //if else for maximum between a,b a>b?a:b is called ternary operator

//now in big program we may define same thing more than one time which will cause error 
//so for that 
#ifndef PI     //if P not defined
#define PI 3   //p=3
#endif         //end

#ifndef G
#define G 9
#endif





#include<iostream>
#include<cstring>
#include<cmath>
#include<climits>
using namespace std;
int main()
{
    cout<<PI<<endl;
    c<<PI<<endl;
    c<<SQR(5)<<endl;
    cout<<SQR(5)<<endl;
    cout<<MSG(Hello)<<endl;
    cout<<G<<endl;
    cout<<Max(10,11);
}