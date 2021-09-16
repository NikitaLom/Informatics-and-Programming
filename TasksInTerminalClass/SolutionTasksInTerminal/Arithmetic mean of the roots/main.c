#include <stdio.h>
#include <math.h>


int main() {
    float a, b, c;
    //input
    printf("Enter three numbers: \n-a = ");
    scanf_s("%f", &a);
    printf("-b = ");
    scanf_s("%f", &b);
    printf("-c = ");
    scanf_s("%f", &c);
    //actions
    float S;
    S = (sqrt(a) + sqrt(b) + sqrt(c)) / 3;
    //output
    printf("Results = %f", S);
    return 0;
}