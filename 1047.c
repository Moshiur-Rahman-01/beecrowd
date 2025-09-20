// https://judge.beecrowd.com/en/problems/view/1047
#include <stdio.h>
int main()
{
    int a, b,c,d;
    scanf("%d%d%d%d", &a, &b, &c,&d);
    if (c <= a)
    {
        if(d<b){
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", c + 24 - a-1, d+60-b);
        }
        else{
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", c + 24 - a, d - b);
        }
    }
    else
    {
        if (d < b)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", c - a-1, d + 60 - b);
        }
        else
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", c- a, d - b);
        }
    }
    return 0;
}