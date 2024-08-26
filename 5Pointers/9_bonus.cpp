#include<bits/stdc++.h>
using namespace std;
int main()
{
    //int **fun(float*,char**)  a function which takes pointer to float and pointer to pointer to char and returns pointer to pointer to integer 
    
    
    char s='a';
    char *p=&s;
    cout<<*p+1<<endl;

    cout<<"an integer pointer (not array of pointers) pointing to array of integers and (*ptr)[k] k is size of array"<<endl;
    int nums[10]={1,2,3,4,5,6,7,8,9,10};
    int (*ptr)[10]=&nums;
    cout<<(*ptr)[1]<<endl;

    int arr[]={2,4,6,8,10};
    int pp=(*(&arr+1)-*(&arr));
    cout<<pp;  //pp=5 is size of array
}

