#include <stdio.h>
#include <stdlib.h>
int main() {
int x,y,z;
scanf("%d%d%d",&x,&y,&z);
if((x*x)+(y*y)<(z*z)||(z*z)+(y*y)<(x*x)||(x*x)+(z*z)<(y*y)) {
    printf("\nObtuse Triangle"); }
else if((x*x)+(y*y)>=(z*z)||(z*z)+(y*y)>=(x*x)||(x*x)+(z*z)>=(y*y)) {
    printf("\nNot Obtuse Triangle"); }
else {
printf("\nCannot form a Triangle"); }
	return 0; }