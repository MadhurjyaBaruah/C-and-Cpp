#include <stdio.h>
#include <math.h>

int main() {
    double x, y;
    printf("Enter the values of x and y: ");
    scanf("%lf %lf", &x, &y);
    
    double result = sin(y /sqrt(x * x + y * y));
    
    printf("Result: %lf\n", result);
    
    return 0;
}
  

