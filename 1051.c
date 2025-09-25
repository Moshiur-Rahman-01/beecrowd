// https://judge.beecrowd.com/en/problems/view/1051
#include <stdio.h>
int main()
{
    float a;
    scanf("%f", &a);
    if(a>=0.00 && a<=2000.00){
        printf("Isento\n");
    }
    else if(a>2000.00 && a<=3000.00){
        a = a-2000.00;
        printf("R$ %.2f\n", a*.08);
    }
    else if(a>3000.00 && a<=4500.00){
        a = a-3000.00;
        printf("R$ %.2f\n", a*.18 + 80);
    }
    else {
        a = a-4500.00;
        printf("R$ %.2f\n", a*.28 + 350);
    }
    return 0;
}