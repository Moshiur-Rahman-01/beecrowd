// https://judge.beecrowd.com/en/problems/view/1065
#include <stdio.h>
int main()
{
    int a[5],count = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (a[i]%2== 0)
        {
            count++;
        }
    }
    printf("%d valores pares\n", count);
    return 0;
}