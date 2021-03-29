// https://codeforces.com/problemset/problem/208/A
#include<stdio.h>
#include<stdlib.h>


int main(){
    char remix[200] = "";
    char original[200] = "";
    int space=0;
    scanf("%s", remix);    

    int i=0, j=0;

    while('W' == remix[i] && 'U' == remix[i+1] && 'B' == remix[i+2]){
        i =  i+3;
    }

    while (remix[i] != '\0')
    {
        while('W' == remix[i] && 'U' == remix[i+1] && 'B' == remix[i+2]){
            i =  i+3;
            space=1;
        }

        if(space){
            original[j++] = ' ';
            space=0;
        }
        
        original[j++] = remix[i];
        i++;
              
    }
    original[j] = '\0';

    printf("\n%s",original);
    return 0;
}