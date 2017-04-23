#include <stdio.h>
#include "include/area.h"

int main(void) {
	double e3 = 3.0;
	double e4 = 2.0;
	double r = 5.0;
	printf("The triangle's area is %lf,\nwhose length of each side is %lf.\n\n", triangle(e3), e3);
	printf("The square's area is %lf,\nwhose length of each side is %lf.\n\n", square(e4), e4);
	printf("The round's area is %lf,\nwhose radius is %lf.\n\n", round(r), r);
	return 0;
}
