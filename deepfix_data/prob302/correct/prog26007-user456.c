#include <stdio.h>
int main() {
	float a1,a2,b1,b2,p1,p2;
	scanf("%f%f%f%f%f%f",&a1,&a2,&b1,&b2,&p1,&p2);
	if(p1>a1&&p1<b1&&p2>a2&&p2<b2)
	printf("Point is inside the rectangle.");
	else if(((p1=a1)||(p1=b1))&&(p2>=a2)&&(p2<=b2))
	printf("Point is on the rectangle.");
	else if(((p2=a2)||(p2=b2))&&(p1>=a1)&&(p1<=b1))
	printf("Point is on the rectangle.");
	else printf("Point is outside the rectangle.");
	return 0; }