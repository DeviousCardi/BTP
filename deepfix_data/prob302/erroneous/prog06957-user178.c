#include <stdio.h>
#include<math.h>
int main() {
    float ax,ay,cx,cy,px,py;
    scanf("%f %f",&ax,&ay);
    scanf("%f %f",&cx,&cy);
    scanf("%f %f",&px,&py);
    float l,b,d1,d2;
    l=sqrt((cx-ax)*(cx-ax));
    b=sqrt((cy-ay)*(cy-ay));
    d1=sqrt((px-ax)*(px-ax));
    d2=sqrt((py-ay)*(py-ay));
    if(d1<l&&d2<b)
    printf("Point is inside the rectangle.");
    else if(d1==l||d2==b)
    printf("Point is on the rectangle.");
    else printf("Point is outside the rectangle.")
	return 0; }