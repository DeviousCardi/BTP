#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,k,l=0,t,count=0;
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
            if(a[i]>=a[j]) {
               count++; }
              else {
              break; } }
        sum=sum+count;
        c[i]=count;
        count=0; }
  printf("%d\n",sum); }