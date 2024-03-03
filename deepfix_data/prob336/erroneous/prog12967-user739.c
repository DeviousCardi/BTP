#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	 if((a*a+b*b)>(c*c)&&(a*a+c*c)>(b*b)&&(b*b+c*c)>(a*a))
	 {printf("Acute Triangle");}
	 elseif((a*a+b*b)<(c*c)||(a*a+c*c)<(b*b)||(b*b+c*c)<(a*a))&&((a+b>c)&&(b+c>a)&&(a+c>b))
	 {printf("Not Acute Triangle");}
	 else if((a+b<c)||(b+c<a)&&(a+c<b))
	 {printf("Cannot form a Triangle");}
	return 0; }