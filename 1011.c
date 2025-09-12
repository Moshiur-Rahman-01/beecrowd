// https://judge.beecrowd.com/en/problems/view/1011
#include <stdio.h>
int main()
{
    double a;
    scanf("%lf", &a);
    printf("VOLUME = %.3lf\n", (4/3.0)*3.14159*a*a*a);
    return 0;
}