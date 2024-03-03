#include<stdio.h>
int main() {
    int n,k;
    int i,j;
    int total=0;
    scanf("%d %d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int b[k];
    for(i=0;i<k;i++)
    b[i]=0;
    for(i=1;i<k;i++) {
        for(j=0;j<n;j++) {
         if(a[j]==i)
         b[i]++; }
        b[i]=b[i]+total;
        total=b[i]; }
    for(j=0;j<k;j++) {
        for(i=0;i<=b[i];i++)
        printf("%d ",i+1); }
    return 0; }