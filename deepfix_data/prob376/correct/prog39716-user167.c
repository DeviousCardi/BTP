#include <stdio.h>
#include <stdlib.h>
int catalen( int n) {
    int res;
    int i;
   if(n<=1)
   return 1;
   else
    res=0;
   for(i=0;i<n;i++)
       res=res+catalen(i)*catalen(n-i-1);
       return res; }
int main() {
int i,k,t,m;
scanf("%d",&t);
  for(i=0; i<t; i++) {
     scanf("%d",&m);
     k=catalen(m);
     printf("%d\n",k); }
	return 0; }