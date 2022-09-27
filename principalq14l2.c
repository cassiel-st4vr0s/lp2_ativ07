#include<stdio.h>
#include "bibliotecaq14l2.h"

int main(void)
{
        int num;
        float n=1, d=1, result = 0;
        printf("Entre com numero de termos da sequencia 1/1 + 1/2 + ... + 1/N:\n");
        scanf("%d", &num);
        printf("H = ");

        while(num>0)
        {
                mostra_razao(d)==1 ? printf("%.0f/%.0f", n ,d) : printf("%.0f", n);
                result = calc_result(result, n ,d);
                d = calc_d(d);
                num --;
                mostra_adicao(num) == 1 ? printf(" + ") : printf(" . ");
        }
        printf("\nSoma: %f", result);
        return 0;
}

