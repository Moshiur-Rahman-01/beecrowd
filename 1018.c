// https://judge.beecrowd.com/en/problems/view/1018
#include <stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    int notes[7] = {100,50,20,10,5,2,1};
    printf("%d\n",tk);
    for(int i=0; i<7; i++){
        int note = tk/notes[i];
        printf("%d nota(s) de R$ %d,00\n", note,notes[i]);
        tk = tk%notes[i];
    }
    return 0;
}