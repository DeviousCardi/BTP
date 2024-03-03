#include <stdio.h>
int main() {
   int n,m,i,c=0;
   scanf("%d",&n);
   int s[n];
   for(i=0;i<n;i++) {
     scanf("%d",&s[i]); }
   scanf("%d",&m);
   for(i=n-m;i<n;i++) {
       printf("%d",s[i]); } }