#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if ((a+b>c) && (b+c>a) && (c+a>b)) {
	    if (((a^2+b^2)<c^2) || ((b^2+c^2)<a^2) || ((c^2+a^2)<b^2))
	    {printf("Obtuse Triangle");}
	    else
	    printf("Not Obtuse Triangle"); }
	else
	printf("Cannot form a triangle");
	return 0; }