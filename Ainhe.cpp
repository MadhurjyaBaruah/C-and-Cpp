#include <iostream>
using namespace std;

class Shape {
public:
    void displayShape() {
        cout << "This is a shape" << endl;
    }
};
class Triangle : public  Shape {
public:
void displayTriangle() {
    cout << "This is a triangle"<<endl;
}
};
class Pyramid : public  Triangle {
    public:
    void displayPyramid(){
        cout << "This is a pyramid"<<endl;
        int base,height;
        cout<<"enter base and height"<<endl;
        cin>>base>>height;
        cout<<"the area is"<<0.5*base*height<<endl;
        //cout<<endl;
    }
};
class Right_Angle : public Triangle{
    public:
    void displayRightAngled() {
        cout << "This is a right angled triangle"<<endl;
        int base,height;
        cout<<"enter base and height"<<endl;
        cin>>base>>height;
        cout<<"the area is"<<base*height<<endl;
        cout<<endl;
    }
};
class Circle : public Shape {
    public:
     void displayCircle(){
        cout << "This is a circle"<<endl;
     }
};
class Semi_Circle : public  Circle {
    public:
    void displaySemi_Circle(){
        cout << "This is a semi-circle"<<endl;
        int r;
        cout<<"enter radius"<<endl;
        cin>>r;
        cout<<"the area is"<<0.5*3.14*r*r<<endl;
        cout<<endl;
    }
    };
class Full_Circle: public Circle{
    public:
    void displayFull_Circle(){
        cout<<"This is Full_Circle"<<endl;
        int r;
        cout<<"enter radius"<<endl;
        cin>>r;
        cout<<"the area is"<<3.14*r*r<<endl;
        cout<<endl;
    }
};

class Rectangle : public  Shape {
public:
void displayRectangle() {
    cout << "This is a Rectangle"<<endl;
}
};
class Parallelogram : public  Rectangle{
    public:
    void displayParallelogram(){
        cout<<"This is a parallelogram"<<endl;
        int base,height;
        cout<<"enter base and height"<<endl;
        cin>>base>>height;
        cout<<"the area is"<<base*height<<endl;
        cout<<endl;
    }
};

class Square : public Rectangle{
public:
    void displaySquare() {
        cout << "This is a square" << endl;
        int side;
        cout<<"enter side"<<endl;
        cin>>side;
        cout<<"the area is"<<side*side<<endl;
    }
};


int main() {

    Shape shape;
    shape.displayShape();

    Triangle triangle;
    triangle.displayTriangle();

    Pyramid pyramid;
    pyramid.displayPyramid();

    Right_Angle rightAngle;
    rightAngle.displayRightAngled();

    Circle circle;
    circle.displayCircle();

    Semi_Circle semiCircle;
    semiCircle.displaySemi_Circle();

    Full_Circle fullCircle;
    fullCircle.displayFull_Circle();

    Rectangle Rectangle;
    Rectangle.displayRectangle();

    Parallelogram parallelogram;
    parallelogram.displayParallelogram();

    Square square;
    square.displaySquare();

    return 0;
}
