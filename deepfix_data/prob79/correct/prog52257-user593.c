#include <stdio.h>
#include <stdlib.h>
int main () {
   int n,i,t[1000];
   int a,b,sum=0;
   scanf("%d",&n);
   for(i=0;i<n;i++) {
       scanf("%d ",&t[i]);
       for(i=0;i<(n-1)/2;i++) {
           if(t[i]<=t[n-1-i])
           sum++;}
           a=sum;
           b=n-sum;
           printf("%d %d",a,b); }
    return 0; }