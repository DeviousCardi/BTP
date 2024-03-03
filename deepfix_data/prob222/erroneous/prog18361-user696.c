#include <stdio.h>
int main() {
    float a1,a2,a3;
    float b1,b2,b3;\\marks of student B
    float c1,c2,c3;\\marks of student C
    float A,B,C;
    float m;\\median
    scanf("%f%f%f",&a1,&b1,&c1);\\midsem marks
	scanf("%f%f%f",&a2,&b2,&c2);\\endsem marks
	A=a1*40/50+a2*60/100;\\score of student A
	B=b1*40/50+b2*60/100;\\score of student B
	C=c1*40/50+c2*60/100;\\score of student C
	if(A<=B) {
	    if(B<=C){m=B;}\\A<=B<=C
	    else if(A<=C){m=C;}\\A<=C<=B
	    else{m=A;}\\C<=A<=B }
	else {
	    if(B<=C){m=B;}\\C<=B<=A
	    else if(A>=C){m=C;}\\B<=C<=A
	    else{m=A;}\\B<=A<=C }
	    printf("Median weighted score = %.2f",m);\\printing the median
	return 0; }