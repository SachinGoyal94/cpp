#include<iostream>
using namespace std;
int main()
{
    char ch;
    ch=cin.get();
    cout<<"First "<<ch;
    cin.ignore(4,'a');
    char last=cin.get();
    cout<<"First "<<ch<<"  last "<<last<<endl;
}

//if the input is sachin and ignore(4,'a')
/* then for first output=s and then it will ignore either a comes or 4 letters are skipped so now
for last output is c as a comes 
but if ignor(4,'_) then first=s last=n
*/