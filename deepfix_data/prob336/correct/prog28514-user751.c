#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if ((a*a+b*b>=c*c)||(a*a+c*c>=b*b)||(b*b+c*c>=a*a))
    printf("acute triangle");
else
 if((a*a+b*b<=c*c)&&(a*a+c*c<=b*b)||(a*a+b*b<=c*c)&&(b*b+c*c<=a*a)||(a*a+c*c<=b*b)&&(b*b+c*c<=a*a)) printf("cannot form a triangle");
    else printf("not acute triangle");
	return 0; }