#include<iostream>
using namespace std;

class area {
private:
    double base;
    double height;
    double result;
public:
    // Constructor to initialize base and height
    area(double bs, double heig) {
        base = bs;
        height = heig;
    }

    // Function to calculate and display the area of the triangle
    double show() {
        result = 0.5 * base * height  ; 
        cout << "The result of area of triangle is: " <<result << endl  ;
    }
};
main() {
    double B, H;
    cout << "Enter the value for base : ";
    cin >>B;
    cout<<"Enter the value for height: ";
    cin>>H;
    area m(B, H);
    m.show();
    return 0;
}

