//https://codeforces.com/problemset/problem/546/A

#include <stdio.h>   
int main(){
    int k, n, w, borrow;
    k=n=w=borrow=0;
    scanf("%d %d %d", &k, &n, &w);
    borrow = (((1 + w) * w / 2) * k) - n;
    if (borrow < 0)
        borrow = 0;
    printf("%d", borrow);
    return 0;
}
