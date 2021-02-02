//https://codeforces.com/problemset/problem/71/A
#include <stdio.h>   
int main()
{
        int amount=0, count=-1;    
        char word[101];

        scanf("%d", &amount);
        
        while(amount--)
        {
            scanf("%s", &word);
            while(word[++count] != '\0');
            if(count > 10)
                printf("%c%d%c\n", word[0], count-2, word[count-1]);
            else
                printf("%s\n", word);
            count=0;
        }
        return 0;
}