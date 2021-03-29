//https://codeforces.com/problemset/problem/1328/A

#include <stdio.h>


int main(){
    int qt_testes=0;

    scanf("%d", &qt_testes);
    for(int i=0; i<qt_testes; i++){
        int a=0, b=0, num=0;
        scanf("%d", &a);
        scanf("%d", &b);
        int resto = a%b;
        if (resto)
            num = b - resto;
        printf("%d\n", num);
    }    
    return 0;
}