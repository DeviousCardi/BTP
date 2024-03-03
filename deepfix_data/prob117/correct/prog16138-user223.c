#include <stdio.h>
#include <stdlib.h>
int hanoi(int n) {
   if (n==1)
   return 1;
   else
   return 2*hanoi(n-1)+1; }
int main() {
	 int i,t,c=0;
	 scanf("%d",&t);
	     for(i=0;i<t;i++)
	     {   int k,j;
	         scanf("%d",&k);
	         for(j=0;j<100000;j++) {
	             if((hanoi(j)==k)&&(hanoi(j)>=k))
	          {   c=1;
	             break; }
	             else if(hanoi(j)<k)
	             break; } }
	 if (c==1)
	 printf("yes");
	 else printf("no");
	return 0; }