//https://codeforces.com/problemset/problem/1371/A
#include<stdio.h>
#include<stdlib.h>


int main(){
    int num_testes = 0, count=0;
    int *array = 0;

    scanf("%d", &num_testes);
    array = (int*) malloc(num_testes*sizeof(int));

    for(int i=0; i<num_testes; i++){
        scanf("%d", array+i);
    }


    return 0;
}
/*
4

1
2
3
4

1
1
2
2

1
1 2
1+2 3
1+3 4 2 
*/