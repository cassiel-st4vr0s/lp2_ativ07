#include<stdio.h>

float calc_result(float result, float n, float d){
        result += n/d;
        return result;
}

int mostra_adicao(int num){
        int mostra = 0;
        if(num>0) mostra = 1;
        return mostra;
}

int mostra_razao(int d){
        int mostra = 0;
        if(d>1) mostra = 1;
        return mostra;
}

float calc_d(float d){
        d += 1;
        return d;
}

