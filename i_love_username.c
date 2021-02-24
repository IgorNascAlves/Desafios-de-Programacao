//https://codeforces.com/problemset/problem/155/A

#include <stdio.h>


int main(){
    int qt_torneios=0, maior=0, menor=0, count=0, valor=0;

    scanf("%d", &qt_torneios);
    scanf("%d", &valor);
    maior = valor;
    menor = valor;
    for(int i=0; i<qt_torneios-1; i++){
        scanf("%d", &valor);        
        if(valor > maior){
            maior = valor;
            count++;
        }else if(valor < menor){
            menor = valor;
            count++;
        }
    }
    printf("%d\n", count);    
    return 0;
}