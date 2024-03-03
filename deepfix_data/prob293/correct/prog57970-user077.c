#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
	if (a+b<c)
	    printf("Cannot form a Triangle");
	    else if (a*a+b*b<c*c) ;
	    printf("Obtuse Triangle");
	return 0; }