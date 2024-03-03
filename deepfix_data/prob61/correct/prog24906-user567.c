#include<stdio.h>
int main() {
    int n,k,i,j;
    scanf("%d%d",&n,&k);
    int a[n],b[k+1];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
     for(i=0;i<k+1;i++)
     b[i]=0;
     for(i=0;i<n;i++) {
         b[a[i]]++; }
     for(i=0;i<k+1;i++) {
         for(j=0;j<b[i];j++) {
             printf("%d ",i); } } }