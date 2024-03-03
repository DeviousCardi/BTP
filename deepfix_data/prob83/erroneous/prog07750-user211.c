#include <stdio.h>
int main() {
   int n,m,i,c=0;
   scanf("%d",&n);
   int s[n];
   for(i=0;i<n;i++) {
     scanf("%d",&s[i]); }
   scanf("%d",&m);
   for(i=0;i<n;i++) {
       if(i<=(n-1))-(m-1)) {
           s[i]=s[i+m];
           c++;
           printf("%d",s[i]); }
       else {
          s[i]=s[i-c];
          printf("%d",s[i]); } }
    return 0; }