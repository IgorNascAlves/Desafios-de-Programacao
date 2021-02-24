// https://codeforces.com/problemset/problem/705/A
#include <stdio.h>   
#include <math.h>

int main(){    
    
    int n=0;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        if(i%2)
            printf("I hate");            
        else
            printf("I love");
        if(i!=n)
            printf(" that ");
    }
    printf(" it");
    return 0;
}
