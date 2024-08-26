//must see 19 minute video of code with harry basic of stack dsa
//no output program
/* this program is just used to understand what is template although it is already done earlier
but here it is just written to explain why template is required*/

#include<iostream>
using namespace std;
class Stack
{
private:
 int *stk;   //stk is just a pointer to array in which we will store our data 
 int top;    //top is position of last element added in stack
 int size;   //size of stack
public:
 Stack(int sz)  
 {
 size=sz;
 top=-1;
 stk=new int[size];
 }
 void push(int x);  //to add element
 int pop();         //to delete any element
};
void Stack::push(int x)
{
 if(top==size-1)
 cout<<"Stack is Full";
 else
 {
 top++;
 stk[top]=x;
 }
}
int Stack::pop()
{
 int x=0;
 if(top==-1)
 cout<<"Stack is Empty"<<endl;
 else
 {
 x=stk[top];
 top--;
 }
 return x;
}
int main()
{
 Stack s(10);
 s.push(10);
 s.push(23);
 s.push(33);
}