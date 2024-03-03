#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if((a+b>c)){if((((a<=b)&&(b<=c))&&(a*a+b*b==c*c))||(((a>=b)&&(b>=c))&&(b*b+c*c==a*a))||(((b>=a)&&(a>=c))&&(a*a+c*c==b*b))||(((b>=c)&&(a<=c))&&(a*a+c*c==b*b))||(((a>=c)&&(c>=b))&&(b*b+c*c==a*a))||(((c>=a)&&(a>=b))&&(a*a+b*b==c*c)))
	{printf("Right  Triangle");}
	 else{printf("Not Right Triangle");}}
	 else{printf("Cannot form a Triangle");}
	return 0; }