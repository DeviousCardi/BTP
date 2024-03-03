#include<stdio.h>
int main() {
    int n,k,i,j,min;
    scanf("%d%d",&n,&k);
    int chair[n];
    for(i=0;i<n;i++)
        scanf("%d",&chair[i]);
    for(i=0;i<n;i++) {
        min=i;
        for(j=i+1;j<n;j++)
            if(chair[j]<chair[min])
                min=j;
        chair[i]=chair[i]+chair[min];
        chair[min]=chair[i]-chair[min];
        chair[i]=chair[i]-chair[min]; }
    for(i=0;i<n;i++)
        printf("%d ",chair[i]); }