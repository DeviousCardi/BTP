#include<stdio.h>
int main() {
    int n,k,i,j,min;
    scanf("%d%d",&N,&K);
    int chair[n];
    for(i=0;i<n;i++)
        scanf("%d",&chair[i]);
    for(i=0;i<n;i++) {
        min=i;
        for(j=0;j<N;j++)
            if(a[i]<a[min])
                min=i;
        a[i]+=a[min];
        a[min]=a[i]-a[min];
        a[i]-=a[min]; }
    printf("%d",a[n-k]); }