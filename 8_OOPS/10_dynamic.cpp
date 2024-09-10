#include<bits/stdc++.h>
using namespace std;
class Rectangle
{
    public:
    string name;
    int rollno;
    Rectangle(string n,int r)
    {
        name=n;
        rollno=r;   
    }
    ~Rectangle(){};
};
int main()
{
    Rectangle *p=new Rectangle("sachin",10);//"new"creates a new Rectangle object on the heap, initializes it with the name "sachin" and 
                                            //roll number 10, and stores memory address of object in pointer variable p
    cout<<p->name<<endl;
    cout<<(p->rollno)<<endl;
    delete p;
}



/*
class Rectangle
{
    public:
    string name;
    int *rollno;
    Rectangle(string n,int r)
    {
        name=n;
        rollno=new int(r);   
        //*rollno=r;      // also correct 
    }
    ~Rectangle()
    {
        cout<<"need to call destructor for *rollno seperately i.e. delete roll no"<<endl;
        delete rollno;
    }
};
int main()
{
    Rectangle *p=new Rectangle("sachin",10);
    cout<<*(p->rollno)<<endl;
    delete p;
}
*/



// #include<bits/stdc++.h>
// using namespace std;

// class Rectangle
// {
//     private:
//     string name;
//     int *rollno;
//     public:
//     Rectangle(string n,int r)
//     {
//         name=n;
//         rollno=new int(r);
//     }
//     ~Rectangle()
//     {
//         cout<<"need to call destructor for *rollno seperately i.e. delete roll no"<<endl;
//         delete rollno;
//     }
//     int getRollno() 
//     {
//         return *rollno; 
//     } 
// };

// int main()
// {
//     Rectangle *p=new Rectangle("sachin",10);
//     cout<<p->getRollno()<<endl; // Use the getter function
//     delete p;
// }