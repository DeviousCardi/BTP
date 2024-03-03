#include <stdio.h>
#include <stdlib.h>
int main() {
   int n,s[10000],i,a,max=0,mod;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&s[i]);
   mod=s[0];
   for(i=0;i<n;i++) {
       a=0;
      if(s[i]==s[i+1]) {
          a++;
      if(a>=max) {
      max=a;
      mod=s[i]; } }
      else
      continue; }
   printf("%d",mod);
	return 0; }