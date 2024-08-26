#include<iostream>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int main() {
    
    string a;
    cout<<"enter 1st string";
    getline(cin,a);
    cout<<a<<endl;



    char x[100];
    cout<<"enter 2nd string";
    cin.get(x,100);
    cout<<x<<endl;

    //see 2nd string onwards input is not taken when you will use get  for giving input and to get output
    //use cin.ignore() between every 2 cin.get() functions
    cin.ignore();

    char y[100];
    cout<<"enter 3rd string";
    cin.get(y,100);
    cout<<y<<endl;

    cin.ignore();

    char z[100];
    cout<<"enter 4th string";
    cin.get(z,100);
    cout<<z<<endl;
    //if you will use getline then no need to use cin.ignore()

    cin.ignore();
    //for char getline=>
    char k[100];
    cout<<"enter 5th string";
    cin.getline(k,9); //9characters input sachin goyal output sachin g 8characters+9th for \0
    cout<<k<<endl;
}
