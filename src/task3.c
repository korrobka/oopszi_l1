#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long float calc(long float *x, long float *y);

void main()
{
	long float x, y, f;
	x = 0;
	y = 1;

	f = calc(&x, &y);

	//out
	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);
	printf("f = %.4f\n", f);

	//in
	printf("%s", "x = "); scanf("%lf", &x);
	printf("%s", "y = "); scanf("%lf", &y);

	f = calc(&x, &y);
	printf("f = %.4f\n", f);

	system("pause");
}

long float calc(long float *x, long float *y) {
	return(pow(cos(*x), 4) + pow(sin(*y), 2) + (1 / 4)*pow(sin(2 * *x), 2) - 1);
}