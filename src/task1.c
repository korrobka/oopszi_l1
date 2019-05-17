#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
	long float x, y, f;
	x = 0;
	y = 1;

	f = pow(cos(x), 4) + pow(sin(y), 2) + (1 / 4)*pow(sin(2 * x), 2) - 1;

	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);
	printf("f = %.4f\n", f);

	printf("%s", "x = ");
	scanf("%lf", &x);
	printf("%s", "y = ");
	scanf("%lf", &y);

	f = pow(cos(x), 4) + pow(sin(y), 2) + (1 / 4)*pow(sin(2 * x), 2) - 1;

	printf("f = %.4f\n", f);

	system("pause");
}