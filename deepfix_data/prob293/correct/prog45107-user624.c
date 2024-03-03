#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if((a+b<=c)||(b+c<=a)||(a+c<=b)) printf("Cannot form a Triangle");
	else
	if((a*a>b*b+c*c)||(b*b>a*a+c*c)||(c*c>a*a+b*b)) printf("Obtuse Triangle");
	else if((a*a<=b*b+c*c)&&(b*b<=a*a+c*c)&&(c*c<=a*a+b*b)) printf("Not Obtuse Triangle");
    return 0; }