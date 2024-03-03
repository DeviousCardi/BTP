#include <stdio.h>
int main(){
    int i,n,sum[100];
    for(i=1;i<=100;i++)
        scanf("%d",&sum[i]);
        sum[i]=sum[i]+i;
        if(sum[i]==n) {
            printf("lucky"); }
        else if(sum[i]!=n) {
            printf("unlucky"); }
    return 0; }