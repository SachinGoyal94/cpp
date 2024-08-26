//Reading a file        for this file must be existing


#include<iostream>
#include<cstring>
#include<cmath>
#include<climits>
#include<fstream>
using namespace std;
int main()
{

    ifstream infile;   //infile is a object of ifstream
    infile.open("My.txt");  //alternative ifstream infile("My.txt");


    //2 methods to check if file is opened or not
    if(infile)
    {
        cout<<"file is opened"<<endl;
    }
    if(infile.is_open())
    {
        cout<<"file is opened"<<endl;
    }

    string str;
    int x;


    //reading data   but for that it must be of the same order as in file like first name then rollno
    //i.e. first string then int 
    infile>>str;
    infile>>x; 
    cout<<str<<endl<<x<<endl;
    infile>>x;      //we need to re-read the end datatype of file to make it close 
                      //otherwise it will not be ended


    //checking if file is ended or not
    if(infile.eof())
    {
        cout<<"file is closed now";
    }
    else{
        cout<<"you missed to read whole file properly";
    }

    
    infile.close();   //closing file
}