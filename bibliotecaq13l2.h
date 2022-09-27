#include<stdio.h>

float calc_result(float result, float n, float d){
        result += n/d;
        return result;
}

float calc_n(float n){
        n += 1;
        return n;
}

int mostra_adicao(int num){
        int mostra = 0;
        if(num>0) mostra = 1;
        return mostra;
}

float calc_d(float d){
        d += 2;
        return d;
}

