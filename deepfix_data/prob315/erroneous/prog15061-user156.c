#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,t,count=0;
    int sum=0;
    scanf("%d\n",&n);
    int a[n];
    int b[n];
    int c[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        b[i]=a[i]; }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(a[i]>a[j]) {
                t=a[i];
                a[i]=a[j];
                a[j]=t; } } }
   for(i=0;i<n;i++) {
      for(j=0;j<n;j++) {
          if(b[j]==a[i]) {
              l=j; } }
      f0r(k=i;k<j;k++) {
          if(b[k]>a[i])
          count++; }
      c[i]=count;
      count=0;
      sum=sum+count; }
   printf("%d",sum); }