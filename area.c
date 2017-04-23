#include "include/area.h"

double triangle(double edge) {
	return edge * edge * 0.5 * 0.5 * 1.732;
}

double square(double edge) {
	return edge * edge;
}

double round(double r) {
	return 3.14 * r * r;
}
