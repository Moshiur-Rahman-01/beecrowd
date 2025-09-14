// https://judge.beecrowd.com/en/problems/view/1021
#include <stdio.h>
int main()
{
    float tk;
    scanf("%f", &tk);
    int notes[6] = {100, 50, 20, 10, 5, 2};
    int amount = (int)(tk*100);
    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++)
    {
        int note = amount / (notes[i]*100);
        printf("%d nota(s) de R$ %d.00\n", note, notes[i]);
        amount = amount % (notes[i]*100);
    }
    int coins[6] = {100,50,25,10,5,1};
    printf("MOEDAS:\n");
    for(int i=0; i<6; i++){
        int coin = amount/coins[i];
        printf("%d moeda(s) de R$ %.2f\n",coin,coins[i]/100.0);
        amount = amount % coins[i];
    }
    return 0;
}