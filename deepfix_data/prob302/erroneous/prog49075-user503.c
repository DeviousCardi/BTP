#include <stdio.h>
int main() {
	float xA,yA,xC,yC,xP,yP;
	scanf("%f%f\n",&xA,&yA);
	scanf("%f%f\n",&xC,&yC);
	scanf("%f%f",&xP,&yP);
	if(((xP>xC&&xp<xA)&&(yP>yC&&yp<yA))||((xP>xA&&xP<xC)&&(yP>yA&&yP<yC))) {
	    printf("Point is inside the rectangle."); }
	else if(!((xP>xC&&xp<xA)&&(yP>yC&&yp<yA))||((xP>xA&&xP<xC)&&(yP>yA&&yP<yC))) {
	    printf("Point is outside the rectangle."); }
	else {
	    printf("Point is on the rectangle."); }
	return 0; }
(xP==xC&&(yP>=yC&&yP<=yA))||(xP==xC&&(yP>=yA&&yP<=yC))||(xP==xA&&(yP>=yC&&yP<=yA))||(xP==xA&&(yP>=yA&&yP<=yC))||(yP==yC&&(xP))