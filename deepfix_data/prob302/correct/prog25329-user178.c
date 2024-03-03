#include <stdio.h>
int main() {
    float ax,ay,cx,cy,px,py;
    scanf("%f %f",&ax,&ay);
    scanf("%f %f",&cx,&cy);
    scanf("%f %f",&px,&py);
    float l,b,d1,d2;
    l=(cx-ax);
    b=(cy-ay);
    d1=(px-ax);
    d2=(py-ay);
    if(d1<l&&d2<b)
    printf("Point is inside the rectangle.");
    else if(d1==l||d2==b)
    printf("Point is on the rectangle.");
    else printf("Point is outside the rectangle.");
	return 0; }