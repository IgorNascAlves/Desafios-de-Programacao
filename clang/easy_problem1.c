//https://codeforces.com/problemset/problem/1030/A
#include <stdio.h>   
#include <math.h>

int main(){
    int qtd = 0, flag =0, resposta=0;

    scanf("%d", &qtd);

    while(qtd--){
        scanf("%d", &resposta);
        if(resposta)
            flag=1;
    }
    if(flag)
        printf("HARD");
    else
        printf("EASY");  

    return 0;
}