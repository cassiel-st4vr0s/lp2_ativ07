#include<stdio.h>
#include "biblioteca.h"

int main(void)
{

	float valor;
	int n100=0, n50=0, n10=0, n5=0, n1=0;
	
	printf("Entre com o valor do saque: ");
	scanf("%f", &valor);
	
	if(valor<10) printf("\nO Valor do saque não pode ser inferior a 10,00!\n");	
	else if(valor>600) printf("O Valor do saque não pode ser superior a 600,00!\n");	
	else{
		while(valor>0)
		{
			if (valor>=100.00){
				n100 ++;
				valor = saque(valor,100);
			}
			
			else if (valor>=50){
				n50 ++;
				valor = saque(valor,50);
			}
			
			else if (valor>=10){
				n10 ++;
				valor = saque(valor,10);
			}
			
			else if (valor>=5){
				n5 ++;
				valor = saque(valor,5);
			}
			
			else if (valor>=1){
				n1 ++;
				valor = saque(valor,1);
			}
		}
		printf("Notas fornecidas: ");
		if(n100>0) printf("%d nota(s) de 100,00, ", n100);
		if(n50>0) printf("%d nota(s) de 50,00, ", n50);
		if(n10>0) printf("%d nota(s) de 10,00, ", n10);
		if(n5>0) printf("%d nota(s) de 5,00, ", n5);
		if(n1>0) printf("%d nota(s) de 1,00.", n1);
	}
}

