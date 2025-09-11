// http://judge.beecrowd.com/en/problems/view/1005
#include <stdio.h>
int main()
{
    double a,b,r;
    scanf("%lf %lf",&a, &b);
    r = ((a*3.5)+(b*7.5))/11;
    printf("MEDIA = %.5lf\n", r);
    return 0;
}