#include <stdio.h>
#include <stdlib.h>
int main() {
	         int a,b,c;
	         scanf("%d%d%d",&a,&b,&c);
	         if(((a>b)&&(a<c))||((a>c)&&(a<b)))
	          printf("%d",a);
	         else if((a<b)&&(a<c))
	         printf("%d",a);
             else if(((b>a)&&(b<c))||((b>c)&&(b<a)))
	         printf("%d",b);
	         else if((b<a)&&(b<c))
	         printf("%d",b);
	         else
	          printf("%d",c);
	return 0; }