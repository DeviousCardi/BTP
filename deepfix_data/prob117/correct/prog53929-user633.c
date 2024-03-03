#include <stdio.h>
#include <stdlib.h>
int hanoi(int n) {
 if(n==1)
    return(2);
    return(2*hanoi(n-1)); }
int main() {
	int i,t,c,n;
	scanf("%d\n",&t);
	for(i=0;i<t;i++)
	  {scanf("%d\n",&n);
	   c=0;
	   do{
	      if((hanoi(c)-1)==n)
	        {printf("yes\n");
	         break; }
	      c++;
	   }while(hanoi(c)<=n);
	  if(c>n)
	     printf("no\n"); }
	  return 0; }