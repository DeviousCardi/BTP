#include <stdio.h>
#include <stdlib.h>
int hanoi(int n) {
 if(n==1)
    return(2-1);
    return(2*hanoi(n-1)-1); }
int main() {
	scanf("%d\n",&t);
	for(i=0;i<t;i++)
	  {scanf("%d\n",&n);
	   c=0;
	   do{
	      if(hanoi(c)==n)
	        {printf("yes\n");
	         break; }
	      c++;
	   }while(hanoi(c)<=n); }
	return 0; }