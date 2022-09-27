#include<stdio.h>
#include "biblioteca.h"

int main(void)
{
	float l1,l2,l3;
	int eh_triangulo, tipo;

	printf("Entre os 3 lados do triangulo:\n");
	scanf("%f %f %f", &l1, &l2, &l3);

	eh_triangulo=calc_triangulo(l1,l2,l3);
	eh_triangulo==1 ? printf("Eh um triangulo ") : printf("Nao eh um triangulo!");

	if(eh_triangulo==1)
	{
		tipo = calc_tipo_triangulo(l1,l2,l3);
		switch(tipo) {
			case 1:
				printf("equilatero");
				break;

			case 2:
				printf("isosceles");
				break;

			case 3:
				printf("escaleno");
				break;
		}
	}
	return 0;
}

