#include<stdio.h>
#include "bibliotecaq13l2.h"

int main(void){
        int num;
        float n=1, d=1, result = 0;
        printf("Entre com numero de termos da sequencia 1/1 + 2/3 + ... + n/m:\n");
        scanf("%d", &num);


        printf("S = ");
        while(num>0){
                printf("%.0f/%.0f", n ,d);
                result = calc_result(result, n ,d);
                n = calc_n(n);
                d = calc_d(d);
                num --;
                mostra_adicao(num) == 1 ? printf(" + ") : printf(" . ");
        }
        printf("\nSoma: %f", result);
        return 0;
}
