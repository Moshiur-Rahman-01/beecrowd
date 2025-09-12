// https://judge.beecrowd.com/en/problems/view/1010
#include <stdio.h>
int main()
{
    int a1,b1,a2,b2;
    float c1,c2;
    scanf("%d%d%f %d%d%f", &a1,&b1,&c1, &a2,&b2,&c2);
    printf("VALOR A PAGAR: R$ %.2f\n", c1*b1 + c2*b2); 
    return 0;
}