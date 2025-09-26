// https://judge.beecrowd.com/en/problems/view/1067
#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=1; i<=a; i+=2){
        printf("%d\n",i);
    }
    return 0;
}