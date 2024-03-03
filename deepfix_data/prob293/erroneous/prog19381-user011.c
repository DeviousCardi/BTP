#include <stdio.h>
#include <stdlib.h>
int main() {
int x,y,z;
scanf("%d%d%d",&x,&y,&z);
if(x+y<=z||x+z<=y||z+y<=x||)
{printf("Cannot form a Triangle");}
else {
if((x*x)+(y*y)<(z*z)||(z*z)+(y*y)<(x*x)||(x*x)+(z*z)<(y*y))
{printf("\nObtuse Triangle");}
else
{printf("\nNot Obtuse Triangle");} }
	return 0; }