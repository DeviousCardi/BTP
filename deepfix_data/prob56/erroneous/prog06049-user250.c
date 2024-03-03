#include <stdio.h>
#include <stdlib.h>
int cat(int n) {
    if(n=0)
      return 1;
    else
      int sum==0;
      for(i=0;i<n;i++) {
          sum=sum+(cat(i)*cat(n-i)); }
      return sum; }
int main() {
    int i,t,k,q,j;
    scanf("%d\n",&t);
   for(i=0;i<t;i++)
   {  scanf("%d\n",&k);
       for(j=0;1;j++)
       {   q=cat(j);
           if(q>k) {
                 printf("%d\n",q);
                 break; }
            else
              continue; } }
	return 0; }