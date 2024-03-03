#include <stdio.h>
int main() {
	float x1,x2,x3,y1,y2,y3;
	printf("Three lines each containing two floating point numbers                  corresponding to the X and Y coordinate of A, C and P                    respectively.");
	scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
	float cx=(x1+x2)/2.0;
	float cy=(y1+y2)/2.0;
	float d=(cx-x1)*(cx-x1)+(cy-y1)*(cy-y1);
	float d1=(cx-x3)*(cx-x3)+(cy-y3)*(cy-y3);
	printf("Print any one of the following three statements (without       quotes) :\n");
	if(d1<d) {
	    printf("\"Point is inside the rectangle.\""); }
	else if(d1==d) {
	    printf("\"Point is on the rectangle.\""); }
	else {
	    printf("\"Point is outside the rectangle.\""); }
	return 0; }