#include <stdio.h>
#include <math.h>


int main() {
    int a, b;
    //input
    printf("The area of the rectangle through its sides: \n-a = ");
    scanf_s("%d", &a);
    printf("-b = ");
    scanf_s("%d", &b);
    //actions
    float S;
    S = a * b;
    //output
    printf("Results = %.2f", S);
    return 0;
}