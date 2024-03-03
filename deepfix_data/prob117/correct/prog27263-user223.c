#include <stdio.h>
#include <stdlib.h>
int hanoi(int n) {
   if (n==1)
   return 1;
   else
   return 2*hanoi(n-1)+1; }
int main() {
	 int i,t;
	 scanf("%d",&t);
	     for(i=0;i<t;i++)
	     {   int k,j;
	         scanf("%d",&k);
	         for(j=0;j<100000;j++) {
	             if((hanoi(j)==k)&&(hanoi(j)<=k))
	          {  printf("yes");
	             break; }
	             else if(hanoi(j)>k)
	             {printf("no");
	             break;} } }
	return 0; }