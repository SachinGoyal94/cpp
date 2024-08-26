// Notebook

# include<iostream>
using namespace std;

/*
program for dynamic allocation
*/
int main()
{

	char *p=new char[3]; //allocates an array of 3 characters 
	                   //pointer size will always be 8(in 64bit system) here it will show 4(32 bit system)
					   //always it will show 4/8 irrespective of datatype coz it's storing data
	                   //size will not depend on no of elements 
	
	cout<<sizeof p<<endl;
    return 0;
}