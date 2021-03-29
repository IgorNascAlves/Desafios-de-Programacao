// https://codeforces.com/problemset/problem/1419/A
#include<stdio.h>
#include<stdlib.h>
#include <math.h>


int main(){
    int numero_de_rodadas = 0;
    scanf("%d", &numero_de_rodadas);
    for(int i=0; i <numero_de_rodadas; i++){
        
        int qtd_digitos = 0;
        scanf("%d", &qtd_digitos);

        int numero_junto = 0;
        scanf("%d", &numero_junto);

        int *array = (int*) malloc(qtd_digitos*sizeof(int));
        
        
        int resto = numero_junto, j=0, divisao=0;
        
        for(j=0; j<qtd_digitos-1; j++){
            divisao = round(pow(10,qtd_digitos-j-1));
            array[j] = resto / divisao;
            resto = resto % divisao;
        }
        array[j] = resto;

        
        
        free(array);

    }

    return 0;
}