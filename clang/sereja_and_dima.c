//https://codeforces.com/problemset/problem/381/A
#include<stdio.h>
#include<stdlib.h>

void ordena(int pivot,int* vetor, int size){
    for(int i=0; i<size; i++);
}

int main(){
    int size=0, sumA=0, sumB=0;
    int *array = 0;

    scanf("%d", &size);
    array = (int*) malloc(size*sizeof(int));

    for(int i=0; i<size; i++){
        scanf("%d", array+i);
    }

    ordena(size/2, array, size);

    for(int i=0; i<size; i++)
        if(i%2)
            sumA+=array[i];
        else
            sumB+=array[i];
    
    printf("%d %d", sumA, sumB);

    return 0;
}