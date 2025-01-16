
#include <iostream>
using namespace std;

// Function to find the minimum of two numbers
int findMin(int a, int b); //{
//    return (a < b) ? a : b;
//}

// Function to find the minimum of three numbers
int findMin(int a, int b, int c); //{
    //return findMin(findMin(a, b), c);
//}

// Function to find the maximum of two numbers
int findMax(int a, int b); //{
   // return (a > b) ? a : b;
//}

// Function to find the maximum of three numbers
int findMax(int a, int b, int c); //{
   // return findMax(findMax(a, b), c);
//}

int main() {
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Finding minimum using function overloading
    int min_num;
    if (num3) {
        min_num = findMin(num1, num2, num3);
    } else {
        min_num = findMin(num1, num2);
    }

    // Finding maximum using function overloading
    int max_num;
    if (num3) {
        max_num = findMax(num1, num2, num3);
    } else {
        max_num = findMax(num1, num2);
    }

    cout << "Minimum of the numbers: " << min_num << endl;
    cout << "Maximum of the numbers: " << max_num << endl;

    return 0;
}

