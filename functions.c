#include"functions.h"
#include <stdio.h>
#include <math.h>

double firstTask(double x){
	double y;
	y = 1 / (x * sqrt(pow(x, 2) - 1));
	return y;
}

double secondTask(double x, double* y){
	double res = firstTask(x);
	*y = res;
	if (*y == 0)
	{
		return 0;
	}
	else if (*y > 0)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}

void tab(double a, double b, double h){
	double y = 0;
	double res = 0;
	printf("_________________________________________________________________\n");

	printf("|\t\t\tFirst task:\t\t\t\t|\n");
	printf("_________________________________________________________________\n");
	printf("|\t\tX\t\t|\t\tY\t\t|\n");
	printf("_________________________________________________________________\n");
	for (double x = a; x <= b; x += h)
	{
		printf("|\t\t%lf\t|\t\t%lf\t|\n", x, firstTask(x));
		printf("_________________________________________________________________\n");
	}
	printf("\n\n");
	printf("_________________________________________________________________________\n");
		printf("|\t\t\t\tSecond task:\t\t\t\t|\n");
	printf("_________________________________________________________________________\n");
		printf("|\t\tX\t|\t\tY\t|\tResult\t\t|\n");
	printf("_________________________________________________________________________\n");
		for (double x = a; x <= b; x += h)
		{
			res = secondTask(x, &y);
			printf("|\t%lf\t|\t%lf\t|\t%lf\t|\n", x, y, res);
			printf("_________________________________________________________________________\n");
		}
}