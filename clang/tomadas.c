//https://olimpiada.ic.unicamp.br/pratique/pj/2013/f1/tomadas/

#include <stdio.h>   
int main(){
    int T_1=0, T_2=0, T_3=0, T_4=0, total=0;
    scanf("%d %d %d %d", &T_1, &T_2, &T_3, &T_4);
    total = T_1 + T_2 + T_3 + T_4 - 3;
    printf("%d", total);
    return 0;
}
