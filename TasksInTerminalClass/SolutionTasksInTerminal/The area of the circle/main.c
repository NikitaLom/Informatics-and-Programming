#include <stdio.h>
#include <math.h>


int main() {
    int r;
    //input
    printf("The area of the circle: \n-r = ");
    scanf_s("%d", &r);
    //actions
    float pi;
    pi = 3.14;
    float S;
    S = r * pi;
    //output
    printf("Results = %.2f", S);
    return 0;
}