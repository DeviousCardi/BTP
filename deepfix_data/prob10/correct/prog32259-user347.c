#include<stdio.h>
int calc(int a[],int j,int n) {
    int c;
    for(int i=j;i<n;i++) {
        if(a[j]<a[i]) {
            j=i;
            c=1+calc(a,j,n); } }
    return c; }
int main() {
int n,i,j,max=0,d=0;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
    scanf("%d ",&a[i]);
for(j=0;j<n;j++) {
 d=calc(a,j,n);
 if(d>max)
 max=d; }
printf("%d",max);
    return 0; }