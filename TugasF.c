#include <stdio.h>
#include <string.h>

void flipWord(char word[])
{
    for(int j = strlen(word) - 1; j >= 0; j-- )
    {
        printf("%c", word[j]);
    } 
    printf("\0");
}

int main()
{
    int a;
    scanf("%d", &a);
    getchar();

    for(int i = 1; i <= a; i++ )
    {
        char word[1000];
        scanf("%[^\n]", word);
        getchar();
        printf("Case #%d: ", i);
        flipWord(word);
        printf("\n");
    }

    return 0;
}