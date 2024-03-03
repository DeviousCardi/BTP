#include<stdio.h>
int main() {
    int n,k,i,j,min,temp;
    scanf("%d%d",&n,&k);
    int chair[n];
    for(i=0;i<n;i++)
        scanf("%d",&chair[i]);
    for(i=0;i<n;i++) {
        min=i;
        for(j=i+1;j<n;j++)
            if(chair[j]<chair[min])
                min=j;
        temp=chair[min];
        chair[min]=chair[i];
        chair[i]=temp; }
    printf("%d",chair[n-k]); }