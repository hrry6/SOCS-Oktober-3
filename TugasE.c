#include <stdio.h>

void countTree(int index)
{
    int b, tree, count = 0;
    scanf("%d", &b);
    getchar();
    for(int j = 0; j < b; j++)
    {
        scanf("%d", &tree);
        count += tree;
    }
    printf("Case #%d: %d\n", index, count);
}

int main()
{
    int a;
    scanf("%d", &a);
    getchar();

    for(int i = 1; i <= a; i++)
    {
        countTree(i);
    }

    return 0;
}