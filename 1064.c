// https://judge.beecrowd.com/en/problems/view/1064
#include <stdio.h>
int main()
{
    float a[6],sum=0.0,avg;
    int count = 0;
    for (int i = 0; i < 6; i++)
    {
        scanf("%f", &a[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        if (a[i] >= 0)
        {
            count++;
            sum += a[i];
        }
        
    }

    printf("%d valores positivos\n", count);
    printf("%.1f\n",sum/count);
    return 0;
}