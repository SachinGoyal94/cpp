#include<iostream>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int main() {
    string s1="Hello_everyone";
    string s2="world";
    string s3="sachin";
    string s4="medicine";

    cout<<s1<<endl;
    cout<<s2<<endl;

    cout<<s1.append("Bye")<<endl;// s1+"Bye"; same work done
    cout<<s1+'e'<<endl;
    cout<<s1.length()<<endl;
    cout<<s1.size()<<endl;

    cout<<s2.insert(3,"Bye")<<endl; //index pos'n 3

    cout<<s3.insert(3,"Bye",2)<<endl;  //2=only first 2letters of bye to  be inserted

    cout<<s1.replace(3,4,"sachi")<<endl;//from index 3 replace 4 character with first4 characters of sachi

    cout<<s4<<endl;
    cout<<s2<<endl;

    s4.push_back('n');
    cout<<s4<<endl;

    s4.pop_back();
    cout<<s4<<endl;

    s3.swap(s4);
    cout<<"after swapping"<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;

}