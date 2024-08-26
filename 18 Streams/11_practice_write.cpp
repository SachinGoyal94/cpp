#include<iostream>
#include<cmath>
#include<climits>
#include<cstring>
#include<fstream>
using namespace std;
int main()
{
    ofstream ofs("My.txt",ios::trunc);
    ofs<<"Name"<<endl<<"Branch"<<endl<<"Roll no"<<endl;
    ofs.close();
}