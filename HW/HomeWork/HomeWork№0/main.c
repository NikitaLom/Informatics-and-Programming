#include <stdio.h>
#include <math.h>


int main() {
	double x1, x2, y1, y2, d, r1, r2;
	printf("Enter the data of the first circle: \n-x1= ");
	 scanf_s("%d", &x1);
      printf("-y1= ");
	   scanf_s("%d", &y1);
	    printf("-r1= ");
	     scanf_s("%d", &r1);
	printf("Enter the data of the second circle: \n-x2= ");
	 scanf_s("%d", &x2);
	  printf("-y2= ");
	   scanf_s("%d", &y2);
	    printf("-r2= ");
	     scanf_s("%d", &r2);
		 d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2)*(y1 - y2));
		 if (d > r1 + r2)
			 printf("The circles are separated");
		       else if (d < r1 + r2)
			     printf("The circles intersect");
		           else if (d = r1 + r2)
			         printf("The circles touch");
		               else 
			             printf("The circles repeat each other");
             

	return 0;
}