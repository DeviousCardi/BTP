#include <stdio.h>
#include <stdlib.h>
int cat(int n) {
      if(n==0)
        return 1;
      else
        return (2*(2*n-1)*cat(n-1))/(n+1); }
int main() {
    int i,t,k,j;
    scanf("%d\n",&t);
   for(i=0;i<t;i++)
   {  scanf("%d\n",&k);
       for(j=0;j<k;j++) {
           if(cat(j)>k) {
                 printf("%d\n",cat(j));
                 break; }
            else
              continue; } }
	return 0; }