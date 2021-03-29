//https://codeforces.com/problemset/problem/263/A
#include <stdio.h>   
#include <stdlib.h>

int main(){
    int posx=-1, posy=-1, temp=0, i=0, j=0, count=0;

    while(posx==-1){
        if(i==5){
            i=0;
            j++;
        }
        scanf("%d", &temp);
        if(temp){
            posx=i;
            posy=j;
        }
        i++;
    }    
    
    count =  abs(posx - 2) + abs(posy - 2);

    printf("%d\n", count);
    return 0;
}