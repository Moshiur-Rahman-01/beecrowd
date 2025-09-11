// http://judge.beecrowd.com/en/problems/view/1006
#include <stdio.h>
int main()
{
    double a, b, c, r;
    scanf("%lf %lf %lf", &a, &b, &c);
    r = ((a * 2) + (b * 3) + (c*5)) / 10;
    printf("MEDIA = %.1lf\n", r);
    return 0;
}