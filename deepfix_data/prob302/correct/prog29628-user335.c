#include <stdio.h>
int main() {
    float a1,a2,c1,c2,p1,p2;
    scanf("%f%f\n%f%f\n%f%f",&a1,&a2,&c1,&c2,&p1,&p2);
    if (((p1>a1)&&(p1<c1))&&((p2>a2)&&(p2<c2))) {printf("Point is inside the rectangle.");}
    else if (((p1>a1)||(p1<c1))&&((p2==a2)||(p2==c2))) {printf("Point is on the rectangle.");}
    else if (((p1==a1)||(p1==c1))&&((p2>=a2)&&(p2<=c2))) {printf("point is on the rectangle.");}
    else {printf("Point is outside the rectangle.");}
	return 0; }