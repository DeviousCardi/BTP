#include <stdio.h>
#include <stdlib.h>
int main() {
   int n,s[10000];
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&s[i]);
   mod=s[0];
   for(i=0;i<n;i++) {
      if(s[i]==s[i+1]) {
      a++;
      if(a>=max)
      mod=s[i]; }
      else
      continue; }
	return 0; }