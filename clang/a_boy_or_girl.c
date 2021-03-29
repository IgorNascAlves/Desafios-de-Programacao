//https://codeforces.com/problemset/problem/236/A

#include <stdio.h>   
int main(){
    char nickname[100];
    char letters[100];
    int pos=-1, size=0, flag=0;
    scanf("%s", nickname);    
    while(nickname[++pos] != '\0')
    {
        for(int i=0; i<size; i++){
            if(nickname[pos] == letters[i])
               flag=1;
        } 
        if(!flag)
            letters[size++] = nickname[pos];
        flag=0;
    }
    if(size%2)
        printf("IGNORE HIM!");
    else
        printf("CHAT WITH HER!");
    return 0;
}