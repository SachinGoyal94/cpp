#include<bits/stdc++.h>
using namespace std;
// template <class T>
// class Test {
// T var;
// public:
// Test (T i) {var=i;}
// T divideBy2 () {return var/2;}
// };
// int main()
// {
//     int i=50;
//     Test  t1(i);
//     Test  t2(-10.20);
//     cout<<t1.divideBy2()<<" "<<t2.divideBy2()<<endl;
// }


// void checkcgpa(int cgpa) 
// { 

//     if(cgpa >= 8) 
//         throw string ("very good"); 
//     if(cgpa >=6 && cgpa < 8) 
//         throw 'h'; 
//     if(cgpa >= 4 && cgpa < 6) 
//         throw 1.0; 
//     if(cgpa < 4) 
//         throw 1; 
// }
// int main()
// {
//     int cg;
//     try
//     {
//         checkcgpa(6);
//     }
//     catch(string e)
//     {
//         cout<<"caught you "<<e<<endl;
//     }
//     catch(char e)
//     {
//         cout<<"caught you "<<e<<endl;
//     }
//     catch(int h)
//     {
//         cout<<"caught you "<<h<<endl;
//     }
// }

// class Exam 
// {
//     public: 
//         virtual void display()=0;

//         virtual void showl()
//         {
//             cout<<"Exam is going on ";
//         }
//         void show2()
//         {
//             cout<<"I like C++ ";
//         }
// }; 
// class EST: public Exam 
// { 
//     public: 
//     void display()
//     {
//         cout<<"UTA018 ";
//     } 
//     void showl() 
//     {
//         cout<<"EST is going on ";
//     } 
//     void show2() {cout<<"I don't like C++ ";
//     } 
// }; 
// int main() 
// {
// Exam *el = new EST; 
// el->display(); 
// el->showl(); 
// el->show2(); 
// }

// int main() 
// { 
//     int x = -1; 
//     try
//     { 
//         cout<<"Inside try"; 
//         if (x < 0) 
//             throw x; 
//         cout<< "After throw, "; 
//     }
//     catch (int x) 
//     {
//         cout<<"Exception Caught, "; 
//     }
//     cout<< "After catch"; 
//     return 0; 
// }

class student 
{
    public: 
    student()   {cout<<"student ";}
}; 
class exam: public student {
    public:     
    exam()
    {cout<<"exam ";}
}; 
class project: public exam  {
public: 
project()
    {
        cout<<"project ";
    }
};
class result : public project
{
    public: 
    result ()
    {
        cout<<"result ";
    } 
};
int main() 
{
    result r; 
    return 0;
}