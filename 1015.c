// https://judge.beecrowd.com/en/problems/view/1015
#include <stdio.h>
#include<math.h>
int main()
{
    double a1,b1,a2,b2,d;
    scanf("%lf%lf %lf%lf", &a1,&b1,&a2,&b2);
    d = sqrt((a2-a1)*(a2-a1)+(b2-b1)*(b2-b1));
    printf("%.4lf\n", d);
    return 0;
}