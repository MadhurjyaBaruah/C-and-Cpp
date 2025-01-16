#include <iostream>
using namespace std;

// 1) float marks()
float marks();
// 2) float marks(float maths)
float marks(float maths);
// 3) float marks(float maths, float science)
float marks(float maths, float science);
// 4) float marks(float maths, float science,float advMath)
float marks(float maths, float science, float advMath);
// 5) Int marks()
//int marks();
// 6) int marks(int evm)
int marks(int evm);

// 1) float marks()
float marks() {
    cout << "No marks provided." << endl;
    return 0.0;
}

// 2) float marks(float maths)
float marks(float maths) {
    cout << "Maths marks: " << maths << endl;
    return maths;
}

// 3) float marks(float maths, float science)
float marks(float maths, float science) {
    cout << "Maths marks: " << maths << endl;
    cout << "Science marks: " << science << endl;
    return maths + science;
}

// 4) float marks(float maths, float science,float advMath)
float marks(float maths, float science, float advMath) {
    cout << "Maths marks: " << maths << endl;
    cout << "Science marks: " << science << endl;
    cout << "Advanced Maths marks: " << advMath << endl;
    return maths + science + advMath;
}

// 5) Int marks()
//int marks() {
    //cout << "No marks provided." << endl;
  //  return 0;
//}

// 6) int marks(int evm)
int marks(int evm) {
    cout << "EVM marks: " << evm << endl;
    return evm;
}

int main() {
    marks();
    marks(90);
    marks(85, 90);
    marks(80, 75, 85);

    marks();
    marks(95);
    return 0;
}


