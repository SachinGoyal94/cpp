//Notebook


#include<iostream>
#include<cstring>
#include<cmath>
#include<climits>
using namespace std;
int main(){
    
    for(int i=0;i<4;i+=1)      //i=row index   j=coulmn index
    {
        for(int j=0;j<4;j+=1)
        {
            if(i+j<4)
            {
                cout<<"*"<<"   ";
            }
            else{
                cout<<"    ";
            }
          
        }
        cout<<endl;
    }
    return 0;
} 