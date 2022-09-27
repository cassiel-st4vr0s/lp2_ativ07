#include <stdio.h>
#include <math.h>

float calc_delta(float a, float b, float c){
	float delta = b*b - 4 * a * c;
	return delta;
}

float calc_x1(float a, float b, float delta){
	float x1;
	if(delta==0)
		x1= -b / (2 * a);
	else
		x1= (-b - sqrt(delta)) / (2 * a);
		
	return x1;
}

float calc_x2(float a, float b, float delta){
	float x2;
	x2 = (-b + sqrt(delta)) / (2 * a);
		
	return x2;
}

