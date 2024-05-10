#include "conway_life.h"
#include <stdlib.h>

int main(int c, char **v)
{
	int w = 0, h = 0;
	if (c > 1) w = atoi(v[1]);
	if (c > 2) h = atoi(v[2]);
	if (w <= 0) w = 30;
	if (h <= 0) h = 30;
	conway_life(w, h);
}
