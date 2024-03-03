#include <stdio.h>
#include <stdlib.h>
int main() {
	         int num,a,x,rev=0;
	         scanf("%d",&num);
	         x=num;
	         while(x>0)
	         {   a = x%10;
	            rev= rev+a
	              x=x/10; }
	         if(rev==num)
	         printf("yes");
	         else
	         printf("no");
	return 0; }