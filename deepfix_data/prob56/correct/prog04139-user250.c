#include <stdio.h>
#include <stdlib.h>
int cat(int n)
{   int sum,i;
    if(n==0)
      return 1;
    else
       sum=0;
      for(i=0;i<n;i++) {
          sum=sum+(cat(i)*cat(n-i)); }
      return sum; }
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