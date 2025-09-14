// https://judge.beecrowd.com/en/problems/view/1020
#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int y = a/365;
    a = a%365;
    int m = a/30;
    int d = a%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);
    return 0;
}