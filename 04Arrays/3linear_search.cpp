# include<iostream>
using namespace std;
    
/*program for linear search of array element

*/
int main()
{
 	int a[10],n=10;
	int key;
	cout<<"enter numbers";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter key";
	cin>>key;
	for(int i=0;i<n;i++)
	{
		if(key==a[i])
		{
			cout<<"found at"<<i;
			return 0; // if key is found the whole program will stop here hence "not found" will not come as output
		}
	}	
	cout<<"not found";
	return 0;
}	