#include<stdio.h>

int calc_triangulo(float l1, float l2, float l3)
{
	int eh_triangulo = 0;
	
	if((l1+l2>l3) && (l1+l3>l2) && (l3+l2>l1)){
		eh_triangulo = 1;
	}
	
	return eh_triangulo;
	
}

int calc_tipo_triangulo(float l1, float l2, float l3)
{
	if((l1==l2) && (l2==l3)) return 1; //equilatero
	else if((l1==l2) || (l2==l3) || (l1==l3)) return 2; //isosceles
	else return 3; //escaleno
}

