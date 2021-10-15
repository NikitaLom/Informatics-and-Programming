#include <stdlib.h>
# include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define n 10

int main(){
    int b, j, K, i, a[n];
    srand(time(0));
    for (i = 0; i < n; i++)
        a[i] =rand() % 24-10;
    K = 4;
    printf("\n \n Generated array a[n]\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    for (i = 0; i < K; i++) {
        b = a[n - 1];
        for (j = n - 1; j > 0; j--)
         a[j] = a[j - 1];
         a[0] = b;
    }
    printf("\n \n Shifting array elements a[n]on %d positions \n", K);
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}