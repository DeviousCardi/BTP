#include <stdio.h>
int main()
{   float a1,b1,c1;
	float a2,b2,c2;
	float a3,b3,c3;
	float m1,m2,m3;
	scanf("%f%f%f",&a1,&b1,&c1);
	scanf("%f%f%f",&a2,&b2,&c2);
	a3=0.8*a1+0.6*a2;
	b3=0.8*b1+0.6*b2;
	c3=0.8*c1+0.6*c2;
	if ((a3>=b3)&&(a3>=c3)){
	    if (b3>=c3){
            m1=c3;m2=b3;m3=a3; }
	    else{
	        m1=b3;m2=c3;m3=a3; } }
    if ((b3>=a3)&&(b3>=c3)){
        if(a3<=c3){
            m2=c3;m1=a3;m3=b3; }
        else{
            m1=c3;m2=a3;m3=b3; } }
    if ((c3>=b3)&&(c3>=a3)){
        if (b3<=a3){
            m2=a3;m1=b3;m3=c3; }
        else {
            m1=a3;m2=b3;m3=c3; } }
    printf("Median weighted score = %.2f",m2);
	return 0; }