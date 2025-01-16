#include<iostream>
using namespace std;

class Shape
{
public:
    void display1()
    {
        cout << "Class Shape Created" << endl;
    }
};

class Triangle : public Shape
{
public:
    void display2()
    {
        cout << "This is a TRIANGLE" << endl;
    }
};

class Rectangle : public Shape
{
public:
    void display3()
    {
        cout << "This is a RECTANGLE" << endl;
    }
};

class Circle : public Shape
{
public:
    void display4()
    {
        cout << "This is a CIRCLE" << endl;
    }
};

class Pyramid : public Triangle
{
public:
    void displayA(float base_area,float base, float height)
    {
        cout << "-The surface area of a PYRAMID is " <<base_area + 0.5 * base * height << endl;
    }
};

class Right_angle : public Triangle
{
public:
    void displayB(float base, float height)
    {
        cout << "-The area of a RIGHT ANGLE TRIANGLE is " << 0.5 * base * height << endl;
    }
};

class Parallelogram : public Rectangle
{
public:
    void displayC(float base, float height)
    {
        cout << "-The area of a PARALLELOGRAM is " << base * height << endl;
    }
};

class Square : public Rectangle
{
public:
    void displayD(float side)
    {
        cout << "-The area of a SQUARE is " << side * side << endl;
    }
};

class Semi_circle : public Circle
{
public:
    void displayE(float r)
    {
        cout << "-The area of a SEMI CIRCLE is " << 0.5 * 3.14 * r * r << endl;
    }
};

class Full_circle : public Circle
{
public:
    void displayF(float r)
    {
        cout << "-The area of a FULL CIRCLE is " << 3.14 * r * r << endl;
    }
};

int main()
{
    float num1, num2,num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2>>num3;
    
    Shape obj;
    obj.display1();
    
    Triangle T;
    T.display2();
    Pyramid T;
    T.displayA(num1, num2,num3);
    Right_angle ra;
    ra.displayB(num1, num2);
    
    Rectangle R;
    R.display3();
    Parallelogram pl;
    pl.displayC(num1, num2);
    Square s;
    s.displayD(num1);
    
    Circle C;
    C.display4();
    Semi_circle sc;
    sc.displayE(num1);
    Full_circle fc;
    fc.displayF(num1);

    return 0;
}

