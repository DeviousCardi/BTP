#include<stdio.h>
int main() {
    int n,k,i,j,min;
    scanf("%d%d",&n,&k);
    int chair[n];
    for(i=0;i<n;i++) {
        scanf("%d",&chair[i]);
        printf("%d",chair[i]); }
    for(i=0;i<n;i++) {
        min=i;
        for(j=0;j<n;j++)
            if(chair[i]<chair[min])
                min=i;
        chair[i]+=chair[min];
        chair[min]=chair[i]-chair[min];
        chair[i]-=chair[min]; }
    printf("%d",chair[n-k]); }