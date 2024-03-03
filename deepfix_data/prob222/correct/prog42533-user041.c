#include <stdio.h>
int main() {
	float a,b,c,A,B,C,x,y,z;
	scanf("%f %f %f",a,b,c);
	scanf("%f %f %f",A,B,C);
	x=(a*40/50)+(A*60/100);
    y=(b*40/50)+(B*60/100);
    z=(c*40/50)+(C*60/100);
    if(x>y&&x<z||x<y&&x>z) {
        printf("%.2f",x); }
    else if(y>x&&y<z||y<x&&y>z) {
        printf("%.2f",y); }
 	else
 	printf("%.2f",z);
 	return 0; }