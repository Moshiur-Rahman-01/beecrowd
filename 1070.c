// https://judge.beecrowd.com/en/problems/view/1070
#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%2==0){
        for(int i=a+1; i<=a+12; i+=2){
            printf("%d\n",i);
        }
    }
    else{
        for (int i = a; i < a + 12; i += 2)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}