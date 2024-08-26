#include<iostream>
#include<climits>    //to get max/min it value

using namespace std;
int main()
{
 	/*  int A[10]={1,2,3,4,5,6,7,8,9,110},n=10,max=A[0];
	for(int i=0;i<=n;i+=1)
	{
        if(A[i]>max)
        {
            max=A[i];
        }
	}
	cout<<"max is "<<max<<endl;
    
     but wait if all the elemnts of array are -ve like B then if we take max =0 then output will 
    be zero as -y<0 but in array like B -1 is highest */



{
 	int B[10]={-1,-2,-3,-4,-5,-6,-7,-8,-9,-110},n=10;
	int Max=INT_MIN;
    for(auto& x:B)
	{
        if(x>Max)
        {
            Max=x;
        }
	}
	cout<<"max is "<<Max;
    return 0;
}	
    
}	