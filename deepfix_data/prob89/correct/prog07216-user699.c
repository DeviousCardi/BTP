#include <stdio.h>
int main(){
    int k,n;
    scanf("%d%d",&k,&n);
    int s[n],i=0;
    scanf("%d",&s[i]);
    for (i=0;i<=100;i++){
        for (int j=0;j<=n;j++){
            if (s[i]+s[j]==k){
                printf("lucky");break; }
            else continue; } }
    return 0; }