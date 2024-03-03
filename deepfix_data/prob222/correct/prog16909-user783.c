#include <stdio.h>
int main() {
    float m1,m2,m3;
    float e1,e2,e3;
    float w1,w2,w3;
	scanf("%f%f%f",&m1,&m2,&m3);
	scanf("%f%f%f",&e1,&e2,&e3);
	w1=m1*4/5+e1*6/10;
	w2=m2*4/5+e2*6/10;
	w3=m3*4/5+e2*6/10;
	if((w1>w2&&w2>w3)||(w3>w2&&w2>w1))
	    printf("Median weighted score = %.2f",w2);
	    else {
	        if((w2>w1&&w1>w3)||(w3>w1&&w1>w2))
	        printf("Median weighted score = %.2f",w1);
	        else
	        printf("Median weighted score = %.2f",w3); }
	return 0; }