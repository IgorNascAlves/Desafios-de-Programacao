// https://codeforces.com/problemset/problem/758/A
#include<stdio.h>
#include<stdlib.h>


int main(){
    int num_citizens = 0, maior=0, sum=0;
    int *array = 0;

    scanf("%d", &num_citizens);
    array = (int*) malloc(num_citizens*sizeof(int));

    scanf("%d", &maior);
    array[0] = maior;

    for(int i=1; i<num_citizens; i++){
        scanf("%d", array+i);
        if(array[i] > maior)
            maior = array[i];
    }

    for(int i=0; i<num_citizens; i++)
        sum += maior - array[i];

    printf("%d", sum);
    return 0;
}