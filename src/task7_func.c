#include <math.h>

extern long float x, y, f;

void calc(void) {
	f = pow(cos(x), 4) + pow(sin(y), 2) + (1 / 4)*pow(sin(2 * x), 2) - 1;
}