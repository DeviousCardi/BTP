#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,temp;
	scanf("%d%d%d",&a,&b,&c);
	if (a>=b){temp=a; a=b; b=temp;}
	if (b>=c){temp=b; b=c; c=temp;}
	if (a>=b){temp=a; a=b; b=temp;}
    if (a*a+b*b<c*c){printf("Obtuse Triangle");}
    else if (a + b < c) {printf("Cannot form a Triangle");}
    else {printf("Not Obtuse Triangle");}
	return 0; }