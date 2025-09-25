// https://judge.beecrowd.com/en/problems/view/1049
#include <stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20],str3[20];
    scanf("%s%s%s",str1,str2,str3);
    if (strcmp(str1, "vertebrado")==0){
        if(strcmp(str2, "ave")==0){
            if(strcmp(str3, "carnivoro")==0){
                printf("aguia\n");
            }
            else{
                printf("pomba\n");
            }
        }
        else{
            if(strcmp(str3, "onivoro")==0){
                printf("homem\n");
            }
            else{
                printf("vaca\n");
            }
        }
    }
    else{
        if(strcmp(str2, "inseto")==0){
            if(strcmp(str3, "hematofago")==0){
                printf("pulga\n");
            }
            else{
                printf("lagarta\n");
            }
        }
        else{
            if(strcmp(str3, "hematofago")==0){
                printf("sanguessuga\n");
            }
            else{
                printf("minhoca\n");
            }
        }
    }
        return 0;
}