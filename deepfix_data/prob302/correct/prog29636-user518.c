#include <stdio.h>
int main() {
    float x1, y1, x3, y3, px, py, x2;
    scanf("%f%f", &x1, &y1);
    scanf("%f%f", &x3, &y3);
    scanf("%f%f", &px, &py);    ;
    if(x1 > x3){
        x2 = x1;
        x1 = x3;
        x3 = x2;
        x2 = y1;
        y1 = y3;
        y3 = x2; }
    printf("%f%f%f%f%f%f", x1, y1, x3, y3, px, py);
    if(y3 > y1){
        if((px < x1 || px > x3) || (py < y1 || py > y3)){
            printf("Point is outside the rectangle."); }
    	else if((px > x1 && px < x3) && (py > y1 && py < y3)){
    	    printf("Point is inside the rectangle."); }
    	else{
    	    printf("Point is on the rectangle."); } }
	return 0; }