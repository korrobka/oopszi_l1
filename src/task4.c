#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calc(void);

long float x, y, f;

void main()
{
	x = 0;
	y = 1;

	calc();

	//out
	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);
	printf("f = %.4f\n", f);

	//in
	printf("%s", "x = "); scanf("%lf", &x);
	printf("%s", "y = "); scanf("%lf", &y);

	calc();
	printf("f = %.4f\n", f);

	system("pause");
}

void calc(void) {
	f = pow(cos(x), 4) + pow(sin(y), 2) + (1 / 4)*pow(sin(2 * x), 2) - 1;
}