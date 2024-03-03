#include<stdio.h>
int main() {
    int d,n,sum=0,i,j;
    scanf("%d %d",&d,&n);
    int b[n];
    for(i=0;i<d;i++) {
        scanf("%d",&b[i]); }
    int a[n+1];
    for(j=0,i=0;i<d,j<d;i++,j++) {
        a[j]==b[i];
        printf("%d\n",a[j]); }
    a[d]= sum;
    for(j=d+1;j<=n;j++) {
        a[j] = 2*a[j-1] - a[j-d-1]; }
    printf("%d",a[n]); }