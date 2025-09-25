// https://judge.beecrowd.com/en/problems/view/1060
#include <stdio.h>
int main()
{
    float a[6];
    int count=0;
    for(int i=0; i<6; i++){
        scanf("%f",&a[i]);
    }
    for(int i=0; i<6; i++){
        if(a[i]>=0){
            count++;
        }
    }
    printf("%d valores positivos\n",count); 
    return 0;
} 