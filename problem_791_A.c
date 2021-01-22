//https://codeforces.com/problemset/problem/791/A

#include <stdio.h>   
int main(){
    int a=0, b=0, count=0;
    scanf("%d", &a);
    scanf("%d", &b);
    while(a <= b){
        a *= 3;
        b *= 2;
        count++;
    }
    printf("%d", count);
    return 0;
}