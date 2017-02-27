#include "trygonometria.h"
#include <math.h>

double sin_degree(double degree) {
//zamiana stopni na radiany: double radian=degree*pi/180.0;
//return sin(radian); //funkcja biblioteczna z math.h
	double radian = degree*3.14159265358979323846/180.0;
	return sin(radian);
}
double cos_degree(double degree) { /*...*/

	double radian = degree*3.14159265358979323846/180.0;
	return cos(radian); 
}