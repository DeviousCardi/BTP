#include<stdio.h>
int calc(int a[],int j,int d) {
    int k,sum=0;
    for(k=(j-d);k<j;k++) {
        sum=sum+a[k]; }
    return sum; }
int main() {
int d,n,i,j;
scanf("%d %d",&d,&n);
int b[d],a[n+1];
for(i=0;i<d;i++) {
scanf("%d",&b[i]);
a[i]=b[i]; }
for(j=d;j<=n;j++) {
    a[j]=calc(a,j,d); }
printf("%d",a[n]);
return 0; }