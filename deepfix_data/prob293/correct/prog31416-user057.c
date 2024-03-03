#include <stdio.h>
#include <stdlib.h>
int main() {
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	if(x+y<z || x+z<y || y+z<x)
	{printf("Cannot form a Triangle");}
	else {
	if(z*z>x*x+y*y)
	printf("Obtuse Triangle");
	if(x*x>y*y+z*z)
	printf("Obtuse Triangle");
	if(y*y>x*x+z*z)
	printf("Obtuse Triangle");
	else
	printf("Not Obtuse Triangle");}
	return 0; }