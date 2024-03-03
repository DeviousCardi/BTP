#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if ((a*a+b*b)>c*c){printf("Obtuse Triangle");}
	else if (a==b && b!=c){printf("Obtuse Triangle");}
	else if (a==c && b!=c){printf("Obtuse Triangle");}
	else if (a+b<=c){printf("Cannot form a Triangle");}
	else {printf("Not Obtuse Triangle");}
	return 0; }