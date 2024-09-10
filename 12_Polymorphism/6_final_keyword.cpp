//final -> for class ->no class can futhermore inherit from that final class
//final -> for function -> function cannot be overrided anymore
#include <bits/stdc++.h>
using namespace std;
class Shape   //final      just add final here you see error as circle rect triangle inheriting from shape  
{
public:
    virtual void draw() //final   just add final here you see error as circle rect triangle overriding draw function   
    {
        cout << "Generic drawing..." << endl;
    }
};

class Circle : public Shape  
{
public:
    void draw() 
    {
        cout << "Circle drawing..." << endl;
    }
};

class Rectangle : public Shape
{
public:
    void draw()
    {
        cout << "Rectangle drawing..." << endl;
    }
};

class Triangle : public Shape
{
public:
    void draw()
    {
        cout << "Triangle drawing..." << endl;
    }
};

void ShapeDrawing(Shape *s)
{
    s->draw(); // draw is polymorphic
}

int main()
{
    Shape *s = new Shape();
    s->draw();

    // UPCASTING
    Shape *s3 = new Circle();
    s3->draw();

    Circle *c = new Circle();
    c->draw();

    // DOWNCAsTing
    Shape *s2 = new Shape();
    Circle *c2 = (Circle *)s2;
    c2->draw();
    return 0;
}