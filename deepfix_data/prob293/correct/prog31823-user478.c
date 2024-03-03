#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	 if((a==0)||(b==0)||(c==0)||(a+b<=c)||(b+c<=a)||(a+c<=b))
	{printf("Cannot form a Triangle");}
	else if ((a*a+b*b<c*c)||(b*b+c*c<a*a)||(a*a+c*c<b*b)){
	    printf("Obtuse Triangle"); }
	else if((a*a+b*b>=c*c)||(b*b+c*c>=a*a)||(a*a+c*c>=b*b)){printf("Not Obtuse Triangle");}
	return 0; }