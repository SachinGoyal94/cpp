#include<bits/stdc++.h>
using namespace std;
int main()
{
    //array in stack
    int arr[2]={1,2};
    //int *oo=arr++; heap operation can move array  here as in stack so *oo=arr[0] but *oo=arr++=arr[1] not possible
    cout<<*arr<<endl;
    int *oo=arr;
    cout<<"  oo "<<*oo<<endl;
    
    //array in heap
    int* brr=new int[10];
    cout<<brr[0]<<"   "<<brr[3]<<"   "<<brr[10]<<endl;//by default initialised to 0 here not getting with 0 
    delete[] brr;
    brr=nullptr;
    cout<<" check  "<<brr<<"   "<<endl;

    //2d array in stack
    int a2[2][2]={{1,2},{3,4}};

    //2d in heap  
    
    /* check onenote */
    
    //int*[4] array of pointers of size 4 pointing to integer 
    //i.e. array containing 4 pointers which is pointing to integers
    
    int **at2=new int*[4];
    //now we have one pointer which is pointing to an array of 4pointers

    //now we will create arrays for each pointer and no of columns=3
    for(int i=0;i<4;i++)
    {
        at2[i]=new int [3];
    }

    cout<<"taking input"<<endl;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>at2[i][j];
        }
    }
    cout<<"printing output"<<endl;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<at2[i][j]<<"   ";
        }
        cout<<endl;
    }

    cout<<"deleting"<<endl;
    for(int i=0;i<4;i++)
    {
        delete[] at2[i];
    }
    

}