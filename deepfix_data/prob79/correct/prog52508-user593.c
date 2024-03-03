#include <stdio.h>
#include <stdlib.h>
int main () {
   int n,i,t[1000];
   int a,b;
   scanf("%d",&n);
   if(n<=1){
   a=1;
   b=0;}
   for(i=0;i<n;i++) {
       scanf("%d ",&t[i]);
       for(i=0;i<(n-1)/2;i++) {
           if(t[i+1]<=t[n-2-i])
           a=a+1;
           b=n-a;
           printf("%d %d",a,b); } }
    return 0; }