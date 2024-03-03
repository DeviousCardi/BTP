#include <stdio.h>
int main() {
	float a1,a2,px,b1,b2,py;
	scanf("%f %f",&a1,&a2);
	scanf("%f %f",&b1,&b2);
	scanf("%f %f",&px,&py);
	 if(((px>a2 &&px<a1)||(px>a1&&px<a2)) && ((py>b2&&py<b1)||(py>b1 && py<b2)))
	    printf("the point lies inside\n");
	else {
	 printf("the point lies outside\n"); }
	return 0; }