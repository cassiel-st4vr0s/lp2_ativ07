#include <stdio.h>

int verifica_1e2(int numero)
{
        int verifica =0;
        if(numero==1)
        {
                verifica ++;
        }
        if(numero==2)
        {
                verifica +=2;
        }
        return verifica;
}

int primo(int numero, int j)
{
        int primo = 0;

        if(numero % j == 0)
                primo = 1;

        return primo;
}
