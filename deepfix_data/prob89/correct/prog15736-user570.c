#include <stdio.h>
int main(){
    int i,x,sum[100];
    for(i=1;i<=100;i++)
        scanf("%d",&sum[i]);
        sum[i]=sum[i]+i;
        if(sum[i]==x) {
            printf("lucky"); }
        else if(sum[i]!=x) {
            printf("unlucky"); }
    return 0; }