#include <stdio.h>
#include <math.h>


int main() {
 int a, h;
    //input
 printf("Enter the base of the triangle and the height (separated by a space): \n-a = ");
 scanf_s("%d", &a);
 printf("-h = ");
 scanf_s("%d", &h);
     //actions
float S;
S = 0.5* a * h ;
    //output
printf("Results = %f", S);
return 0;
}