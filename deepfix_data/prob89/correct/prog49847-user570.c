#include <stdio.h>
int main() {
    int i,k,sum[100];
    while(k%2!=0)
    for(i=1;i<=k;i++)
        scanf("%d",&sum[i]);
        sum[i]=sum[i]+i;
        if(sum[i]==k) {
            printf("lucky"); }
        else if(sum[i]!=k) {
            printf("unlucky"); }
    return 0; }