#include <stdio.h>
int main() {
    float m1,m2,m3,e1,e2,e3,A,B,C,mid;
    scanf("%f %f %f",&m1,&m2,&m3);
    scanf("%f %f %f",&e1,&e2,&e3);
    A=(((m1*40.0)/50.0)+((e1*60.0)/100.0));
	B=(((m2*40.0)/50.0)+((e2*60.0)/100));
	C=(((m3*40.0)/50.0)+((e3*60.0)/100));
	if(A<=B) {
	    if(A<=C) {
	        if(B<=C)
	        mid=B;
	        else
	        mid=C; }
	   else
	   mid=A; }
	else {
	    if(B<=C) {
	        if(A<=C)
	        mid=A;
	        else
	        mid=C; }
	    else
	    mid=B; }
	printf("Median weighted score =%.2f",mid);
	return 0; }