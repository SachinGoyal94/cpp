//No output function
//templae is uesd to pass a type as argument
// here we are using a class which can have some function array of template i.e. of any data type
//and when we will declare like stack<float> in int main() T will get replaced float as datatype

#include<iostream>
using namespace std;
template<class T>
class Stack
{
private:
 T *stk; //now stack can have any single data type values inside it 
 int top;  
 int size;
public:
 Stack(int sz)
 {
 size=sz;
 top=-1;
 stk=new T[size];
 }
 void push(T x);  
 T pop();
};
template<class T>  //whenever using scope resolution under  template must write template<class T>
void Stack<T>::push(T x)   //for templates stack<T> is must
{
 if(top==size-1)
 cout<<"Stack is Full";
 else
 {
 top++;
 stk[top]=x;
 }
}
template<class T>
T Stack<T>::pop()
{
 T x=0;
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
 Stack<float> s(10); //float is given as datatype so template will be replaced by float every where
 s.push(10);
 s.push(23);
 s.push(33);
}