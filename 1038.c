// https://judge.beecrowd.com/en/problems/view/1038
#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d", &a,&b);
    float p[5] = {4.00,4.50,5.00,2.00,1.50};
    for(int i=1; i<=5; i++){
        if(a==i){
            printf("Total: R$ %.2f\n", b*p[i-1]);
        }
    }
    return 0;
}