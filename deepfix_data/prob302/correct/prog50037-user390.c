#include <stdio.h>
int main() {
	int A1,A2,px,B1,B2,py;
	scanf("%f %f",&A1,&A2);
	scanf("%f %f",&B1,&B2);
	scanf("%f %f",&px,&py);
	 if((px>A1&&px<A2)||(py>B2&&py<B1))
	 printf("the point lies inside\n");
	return 0; }