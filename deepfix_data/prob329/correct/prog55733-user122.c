#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,p,q,r;
	scanf("%d%d%d",&a,&b,&c);
	p=a*a; q=b*b; r=c*c;
	  if((a+b>c)&&(b+c>a)&&(c+a>b)) {
	      if((p+q==r)||(q+r==p)||(r+p==q))
	          printf("Right Triangle");
	      else
	          printf("Not Right Triangle");
	   } else {
	          printf("Cannot form a Triangle"); }
	return 0; }