// https://judge.beecrowd.com/en/problems/view/1046
#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d", &a, &b);
    if(b<=a){
        printf("O JOGO DUROU %d HORA(S)\n", b+24-a);
    }
    else{
        printf("O JOGO DUROU %d HORA(S)\n", b - a);
    }
    return 0;
}