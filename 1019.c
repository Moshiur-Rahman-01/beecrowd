// https://judge.beecrowd.com/en/problems/view/1019
#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int d = a/3600;
    a = a%3600;
    int h = a/60;
    int s = a%60;
    printf("%d:%d:%d\n", d,h,s);
    return 0;
}