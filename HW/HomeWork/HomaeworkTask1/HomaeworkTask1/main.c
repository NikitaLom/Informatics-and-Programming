#include <string.h>
#include <stdio.h>
#include <math.h>


int main() {
	int X_1, X_2, Y_1, Y_2, Figure;

	printf("Enter the coordinates of the first cell(X, Y): ");
	scanf_s("%d %d", &X_1, &Y_1);
	printf("Enter the coordinates of the second cell(X, Y): ");
	scanf_s("%d %d", &X_2, &Y_2);

	printf("Select the number of the shape:\n 1. Queen\n 2.King\n 3. Rook\n 4.Bishop\n 5.Knight\n");
	scanf_s("%d", &Figure);

	if (Figure == 1) {
		printf("You have chosen a queen\n");

		if ((X_1 == X_2 || Y_1 == Y_2) || (abs(X_2 - X_1) == abs(Y_2 - Y_1))) {
			printf("The queen can get to the first square\n");
		}
		else {
			printf("The queen cannot get to the first square\n");
		}
	}
	else if (Figure == 2) {
		printf("You have chosen the king\n");

		if ((abs(X_2 - X_1) == 1 && abs(Y_2 - Y_1) <= 1) || (abs(Y_2 - Y_1) == 1 && abs(X_2 - X_1) <= 1)) {
			printf("The king can get to the first square\n");
		}
		else {
			printf("The king cannot get to the first square\n");
		}
	}
	else if (Figure == 3) {
		printf("You have chosen the rook\n");

		if (abs(X_2 - X_1) == abs(Y_2 - Y_1)) {
			printf("The rook can get to the first square\n");
		}
		else {
			printf("The rook can't get to the first square\n");
		}

	}
	else if (Figure == 4) {
		printf("You have chosen an elephant\n");

		if (X_1 == X_2 || Y_1 == Y_2) {
			printf("The bishop can get to the first square\n");
		}
		else {
			printf("The bishop can't get to the first square\n");
		}
	}
	else if (Figure == 5) {
		printf("You have chosen a horse\n");

		if (((abs(X_2 - X_1) == 3) && (abs(Y_2 - Y_1) == 1)) || ((abs(Y_2 - Y_1) == 3) && (abs(X_2 - X_1) == 1))) {
			printf("The horse can get to the first square\n");
		}
		else {
			printf("The horse can't get to the first square\n");
	
	}




	}
	return 0;
}