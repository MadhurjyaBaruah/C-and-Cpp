#include <iostream>

using namespace std;


double cal(double a, double b) {
    double result = a + b;
    cout << "Result is: " << result << endl;

}


double cal(double a, double b, char) {
    double result = a * b;
    cout << "Result is: " << result << endl;

}


double cal(double a, double b, char,char) {
    double result = a - b;
    cout << "Result is: " << result << endl;
 
}


double cal(double a, double b, char,char,char) {
        double result = a / b;
        cout << "Result is: " << result << endl;
}

int main() {
    char op;
    double num1, num2;
    
    cout << "Enter an operator (+, *, -, /): ";
    cin >> op;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
   
    if (op == '+') {
        cal(num1, num2);  
    } else if (op == '*') {
        cal(num1, num2,'*');  
    } else if (op == '-') {
        cal(num1, num2,'-','-');  
    } else if (op == '/') {
        cal(num1, num2,'/','/','/'); 
    } else {
        cout << "Invalid operator" << endl;
    }

    return 0;
}

