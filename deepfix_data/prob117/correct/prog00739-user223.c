#include <stdio.h>
#include <stdlib.h>
int hanoi(int n)
{  if (n==0)
return 0;
   if (n==1)
   return 1;
   else
   return 2*hanoi(n-1)+1; }
int main() {
	 int i,t;
	 scanf("%d",&t);
	     for(i=0;i<t;i++)
	     {   int k,c,j;
	         scanf("%d",&k);
	         for(j=0;j<100000;j++) {
	             if(((c=hanoi(j))==k)&&(c<=k))
	          {  printf("yes");
	             break; }
	             else if(c>k)
	             {printf("no");
	             break;} } }
	return 0; }