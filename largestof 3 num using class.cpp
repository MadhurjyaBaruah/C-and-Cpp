#include <iostream>

class LargestNumber {
private:
    int num1, num2, num3;

public:
    // Method to set the numbers
    void setNumbers(int a, int b, int c) {
        num1 = a;
        num2 = b;
        num3 = c;
    }

    // Method to find the largest number
    int findLargest() {
        if (num1 >= num2 && num1 >= num3) {
            return num1;
        } else if (num2 >= num1 && num2 >= num3) {
            return num2;
        } else {
            return num3;
        }
    }
};

int main() {
    int a, b, c;
    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;

    LargestNumber ln;
    ln.setNumbers(a, b, c);
    int largest = ln.findLargest();

    std::cout << "The largest number is: " << largest << std::endl;

    return 0;
}

