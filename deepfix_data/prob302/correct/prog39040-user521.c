#include <stdio.h>
int main() {
    float XA,YA,XC,YC,XP,YP;
    float xa,ya,xc,yc,xp,yp;
    scanf("%f%f%f%f%f%f",&XA,&YA,&XC,&YC,&XP,&YP);
    if(XA>XC) {
        xa=XA;
        XA=XC;
        XC=xa; }
    if(YA>YC) {
        ya=YA;
        YA=YC;
        YC=ya; }
    if((XA<XP&&XP<XC)&&(YA<YP)&&(YP<YC)) {
        printf("Point is inside the rectangle."); }
    else if(((YP>=YA)&&(YP<=YC)&&(XP==XA))||((YP>=YA)&&(YP<=YC)&&(XP==XC))||((XP>=XA)&&(XP<=XC)&&(YP==YC))||((XP>=XA)&&(XP<=XC)&&(YP==YA))) {
        printf("Point is on the rectangle."); }
    else {
        printf("Point is outside the rectangle."); }
	return 0; }