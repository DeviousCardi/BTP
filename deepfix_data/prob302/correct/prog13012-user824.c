#include <stdio.h>
int main(){
    float a1,a2,c1,c2,x1,x2;
    scanf("%f%f%f%f%f%f",&a1,&a2,&c1,&c2,&x1,&x2);
    if(x1>a1&&x1<c1&&x2>a2&&x2<c2)
    printf("Point is inside the rectangle.");
    else
    if(((x1==a1)||(x1==c1)&&x2>a2&&x2<c2)||((x2==a2)||(x2==c2)&&x1     >a1&&x1<c1))
    printf("Point is on the rectangle.");
    else
    if(x1<a1||x2>c1||x2<a2||x2>c2)
    printf("Point is outside the rectangle.");
	return 0; }