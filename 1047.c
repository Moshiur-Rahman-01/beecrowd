// https://judge.beecrowd.com/en/problems/view/1047
#include <stdio.h>
int main()
{
    int a, b,c,d;
    scanf("%d%d%d%d", &a, &b, &c,&d);
    int start = a*60 + b;
    int end = c*60 + d;
    if (end <= start)
    {
        int duration = end+1440-start;
        int hour = duration/60;
        int min = duration%60;
        
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hour, min);
    }
    else
    {
        int duration = end - start;
        int hour = duration / 60;
        int min = duration % 60;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hour, min);
    }
    return 0;
}