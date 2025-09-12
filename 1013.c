// https://judge.beecrowd.com/en/problems/view/1013
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    int ab = (a+b+abs(a-b))/2;
    int max = (ab+c+abs(ab-c))/2;
    printf("%d eh o maior\n", max);
    // if(a>b && a>c) printf("%d eh o maior\n",a);
    // else if(b>a && b>c) printf("%d eh o maior\n",b);
    // else printf("%d eh o maior\n",c);
    return 0;
}