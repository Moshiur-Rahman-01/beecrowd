// https://judge.beecrowd.com/en/problems/view/1009
#include <stdio.h>
int main()
{
    char a[100];
    double b,c;
    scanf("%s%lf%lf",&a,&b,&c);
    printf("TOTAL = R$ %.2lf\n",b+c*0.15);
    return 0;
}