#include<stdio.h>
int main() {
    int a[100],n,count=0,j,i,l,c[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
     for(i=0;i<n;i++) {
        l=i;
         for(j=i;j<n-1;j++) {
             if(a[j+1]>a[l]) {
             count=count+1;
             l=j+1; } }
        c[i]=count;
        count=0; }
     int m=0;
     for(i=0;i<n;i++) {
         if(c[i]>=c[m])
         m=i; }
    printf("%d",c[m]);
    return 0; }