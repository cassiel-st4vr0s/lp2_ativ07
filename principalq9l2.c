#include <stdio.h>
#include "bibliotecaq9l2.h"

int main(void)
{
        int numero, j;

        printf("Digite o numero para definir se eh ou nao primo: ");
        scanf("%d", &numero);

        if(verifica_1e2(numero) == 1)
                printf("\nNao eh primo\n");

        else if(verifica_1e2(numero) == 2)
                printf("\nEh primo\n");

        else{
                j = 2;
                while(j < numero)
                {
                        if (primo(numero, j)==1)
                        {
                                printf("\nNao eh primo\n");
                                return numero;
                        }
                        j++;
                }
                printf("\nEh primo\n");
        }
        return 0;
}
