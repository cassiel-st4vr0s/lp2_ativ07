#include<stdio.h>

int validaPrimo(int numero)
{
        if(numero == 1)
                return 0;
        if(numero == 2)
                return 1;

        int j = 2, validacoes = 0;

        while(j < numero)
        {
                validacoes ++;
                if (numero % j == 0)
                {
                        return 0;
                }
                j++;
        }
        return validacoes;
}

