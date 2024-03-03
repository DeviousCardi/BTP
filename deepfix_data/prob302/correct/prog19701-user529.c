#include <stdio.h>
int main() {
    float x1,x2,x3,y1,y2,y3,AC_2,AP_2,CP_2;
    scanf("%f",&x1);
    scanf("%f",&y1);
    scanf("%f",&x2);
    scanf("%f",&y2);
    scanf("%f",&x3);
    scanf("%f",&y3);
    AC_2=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    AP_2=((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1));
    CP_2=((x2-x3)*(x2-x3))+((y2-y3)*(y2-y3));
    if((AP_2+CP_2)>AC_2)
        printf("Point is outside the rectangle.");
    else if((AP_2+CP_2)==AC_2)
        printf("Point is on the rectangle");
    else if((AP_2+CP_2)<AC_2)
        printf("Point is inside the rectangle.");
	return 0; }