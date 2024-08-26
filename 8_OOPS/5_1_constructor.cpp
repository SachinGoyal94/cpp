/* now what if we buy a car then select it's colour how odd is that  similarly here we first create 
rectangle then give it dimension how is that possible so CONSTRUCTORS are used 
4 types
1 Default constructor     by default some value will be assigned
2 paramatrized            input will be taken before creating rectangle
3 non paramatrized        similar to default constructor
4 copy constructor        like if i say to dealer i want same car like this 
                          here copy is a reference to paramatrized              */    


#include<bits/stdc++.h>
using namespace std;
class Rectangle
{
    private:
    int lenght,breadth;
    public:
    Rectangle()     //default constructor no return type as constructor creates a object
    {
        lenght=0;
        breadth=0;
    }
    int area()
    {
        int Area=lenght*breadth;
        return Area;
    }
};
int main()
{
    Rectangle r; // Rectangle r() also valid
    cout<<r.area();
}

