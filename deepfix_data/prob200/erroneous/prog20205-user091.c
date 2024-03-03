#include <stdio.h>
int gmax(a[],int m,int n)
{int i,m,n,max=0;
    for(i=0;i<n;i++) {
        if(a[i]>max&&a[i]<m)
        a[i]=max; }
    return max; }
int main() {
    int n,k,i,max=0;
    scanf("%d %d",&n,&k);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        printf("%d",a[i]); }
    max=gmax(a,1000,n);
    printf("%d ",max);
    for(i=0;i<(k-1);i++) {
     max=gmax(a,max,n)
     printf("%d ",max); }
    return 0; }