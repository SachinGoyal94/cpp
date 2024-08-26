//Method1

#include<iostream>
#include<cstring>
#include<cmath>
#include<climits>
using namespace std;
int main() {
  int i=2,j=3;
  int a[i][j];
  int n;
  float sum=0.0,avg;
  
  n=i*j;
  
  
  cout<<"no of elements = "<<n<<endl;
  cout<<"Enter  "<<n<<" elements"<<endl;
  
  
  for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>a[i][j];
		}

	} 



	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			sum+=a[i][j];
		}

	}
  
  
  avg=sum/n;
  cout<<"avg is "<<avg;
	
	return 0;
}