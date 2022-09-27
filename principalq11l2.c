#include<stdio.h>
#include "bibliotecaq11l2.h"

int main(void)
{
        int num;

        printf("Entre com um numero inteiro maior que 0:\n");
        scanf("%d", &num);
        printf("\nNumero %d invertido: %d", num, inverte(num));
        return 0;
}


