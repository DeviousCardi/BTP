#include <stdio.h>
int main() {
	int a1,a2,c1,c2,p1,p2;
	scanf("%f%f",&a1,&a2);
	scanf("%f%f",&c1,&c2);
	scanf("%f%f",&p1,&p2);
	if((c1>a1&&c2>a2)||(c1>a1 && c2<a2)) {
	if(p1>c1 ||p1<a1||p2<a2||p2>c2)
	printf("Point is outside the rectangle.");
	else
	if(p1>a1&&p1<c1&&p2>a2&&p2<c2)
	printf("Point is inside the rectangle.");
	else
	printf("Point is on the rectangle."); }
	else {
	    if(p1>c1 &&p1<a1&&p2<a2&&p2>c2)
	printf("Point is inside the rectangle.");
	else
	if(p1>a1||p1<c1||p2>a2||p2<c2)
	printf("Point is outside the rectangle.");
	else
	printf("Point is on the rectangle."); }
	return 0; }