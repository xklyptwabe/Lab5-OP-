#include "functions.h"
#include <stdio.h>
#include <math.h>

int main(){
	double a = -3;
	double b = -2;
	double h = 0;

	printf("Enter step:");
	scanf_s("%lf", &h);
	tab(a, b, h);

	return 0;
}