#include<iostream>
#include<cmath>
#include<cstring>
#include<climits>
using namespace std;
int main() {
    /*
    creating strings 
    1.using char 
    2. class string*/



    //1. using char 
    //3 ways  array/pointer/just initialisaton
    //x[5] 4 character space for letters last 5th for \0 which is terminating the string
    
    
    
    char x='A';
    cout<<x<<endl;

    char z[]="no size ";
    cout<<z<<endl;


    char q[10]="oversize";     //for understanding->10 is lenght of string and 8 is size of string made i.e. no of characters 
    cout<<q<<endl;
    q[4]='m';
    cout<<q<<endl; // we can modify also


    char r[7]={'A','r','r','a','y','\0','k'};   //\0 not included in size of string  strlen() gives size 
    
    //see after writing \0 no output is give for afterwards inputs
    
    cout<<r<<endl;


    char s[7]={65,66,67,68,'\0',71};
    cout<<s<<endl;

    //after giving output there is \0 which is in output but not shown which means string ends here
    // for ex




    char *f="pointer";   //using char pointer here will give output as a literal unmodifiable 
                  //literals are like constant values and stores in code section not in stack or heap 
    
    
    cout<<*f<<endl;
   
   
   
    /*here pointer will give only 1 letter output at a time as it store base addres of that letter only
    as by default p is at index 0 and r is at index 6  
    to get whole word we need to use loop*/
    
    
    
    for(int i=0;i<7;i+=1)
    {
        cout<<*(f+i);
    }
    cout<<endl;



    //2.class string

    string j="using string now";
    cout<<j<<endl;

}