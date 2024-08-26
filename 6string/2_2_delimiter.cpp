//input stops whenever we hit tab or space or enter while taking input mainly enter but what if we want to 
//take input like 
//My 
//name
//is
//sachin
//but compiler will stop after My so tab space and enter is delimiter 
//but we can take input like this also by using cin.getline(arr,size upto which input is to be taken,delimeter)
//press tab+enter to stop taking input 
#include<iostream>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int main() {
    
    char a[100];
    cout<<"enter 1st string  ";
    cin.getline(a,100,'\t');
    cout<<a<<endl;
}