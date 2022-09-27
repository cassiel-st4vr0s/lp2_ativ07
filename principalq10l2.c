#include <stdio.h>
#include "biblioteca.h"

int main(void)
{
    int numero; 
    int i = 1, aux, j, validacoes = 0;
    printf("Digite o numero de valores: "); 
    scanf("%d", &numero); 
	
	while(i <= numero) 
	{
    	
		if(validaPrimo(i) != 0)
		{
    			validacoes = validacoes + validaPrimo(i);
			printf("\n%d ", i);
		}
		i ++;
    }
    
    printf("\n");
    printf("Validacoes realizadas: %d", validacoes);
	
    return 0;
}
