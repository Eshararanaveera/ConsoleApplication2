#include "circle.h"

void circle::setcircle(double r1) {
	radius = r1;
}

double circle::getcircle() {

	return radius;
}


double circle::calccircle(){
	return 2 * 22.00 / 7 * radius;
}

