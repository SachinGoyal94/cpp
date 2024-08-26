#include<iostream>
using namespace std;
int fun(int m,int *n,int **o)
{
    **o+=1;
    int z=**o; //**o=5 */
    //cout<<**o<<" z"<<endl;
    *n+=2;
    int y=*n;
    m+=3;
    cout<<**o<<" z "<<*n<<" y"<<endl;
    return m+y+z;
}
int recursive(int n)
{
    if(n==1)
    {
        return 1;
    }
    int sum=n+recursive(n-1);
    return sum;

}
int main()
{
    int n=5;
    cout<<recursive(n);
}