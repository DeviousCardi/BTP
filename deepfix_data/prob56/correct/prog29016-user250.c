#include <stdio.h>
#include <stdlib.h>
int cat(int n)
{   int p;
    if(n==0)
      return 1;
    else {
          p=(((2*n)*(2*n-1))/(n*(n+1)))*(cat(n-1));
          return p; } }
int main() {
    int i,j,t,k,q;
    scanf("%d\n",&t);
   for(i=0;i<t;i++) {
       scanf("%d\n",&k);
       for(j=0;j<=10000;j++)
       {   q=cat(j);
           if(q>k) {
                 printf("%d\n",cat(j));
                 break; }
            else
              continue; } }
	return 0; }