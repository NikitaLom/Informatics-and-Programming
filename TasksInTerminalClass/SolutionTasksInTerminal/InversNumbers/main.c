#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int number, isError = 0, isWork = 1, var=3, res, box = 0;
	while (var > 0) {
	printf("Select an operation for number:\n 1-Invers\n 2-The sum of all digits of the number\n 0-For exit\n");
	scanf_s("%d", &var);

	if (var == 1) {
		while (isWork) {
			printf("Let's start Invers!\nFor exit wrote 0 \n");
			int isError = 0;
			do {
				if (isError) {
					printf("You wrote wrong number\n Try again\n");
				}
				printf("Input number :  \n");
				scanf_s("%d", &number);
				if (number == 0) {
					isWork = 0;
					break;
				}
				isError = (number <= 0);
			} while (isError);
			if (!isWork) continue;
			if (isWork) {
				res = 0;
				printf("Your number : %d\n", number);
				do {
					res = res * 10 + number % 10;
					number /= 10;
				} while (number);
				printf("result = %d\n", res);
			}


		}
	}
	else if (var == 2) {
		while (isWork) {
			printf("Print your number: ");
			scanf_s("%d", &number);
			if (number >= 0) {
				isWork = 0;
			}
			else {
				printf("you wrote negative number\n please, try again\n");
			}
		}
		while (number > 0) {
			res = 0;
			res = number % 10;
			box = box + res;
			number /= 10;
		}
		printf("Summa = %d\n", box);
		box = 0;
	}
   }
	printf("Bye!\n\n\n\n");
	return 0;
}
