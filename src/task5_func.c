#include <math.h>

long float calc(long float x, long float y) {
	return(pow(cos(x), 4) + pow(sin(y), 2) + (1 / 4)*pow(sin(2 * x), 2) - 1);
}