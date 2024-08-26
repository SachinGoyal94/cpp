//whenver doing streams code always do it in this folder other wise file will be created somewhere else

#include<iostream>
#include<cstring>
#include<cmath>
#include<climits>
#include<fstream>
using namespace std;
int main()
{
    ofstream ofs("My.txt",ios::trunc);//either create a new file or modify existing file
                           //by default all the data in file will be replace by data written here
    ofs<<"Naaame"<<endl;
    ofs<<11<<endl;         //("My.txt",ios::trunc ) trunc will create all new data in file
    ofs.close();           // and ios::app will append new data by default trunc is used 
                           //ios::app these are called flags
}