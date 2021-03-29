//https://codeforces.com/problemset/problem/791/A

#include <stdio.h>   
#include <math.h>

//3^x * a = 2^x * b
//(3/2)^x = b/a
//x = log3/2 b/a = log10 b/a / log10 3/2

int main(){
    float a=0, b=0;
    int count=0;
    scanf("%f", &a);
    scanf("%f", &b);
    count = (int)((log10(b/a)/0.17609) + 1);
    printf("%d\n", count);
    return 0;
}