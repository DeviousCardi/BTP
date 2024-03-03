#include <stdio.h>
int main() {
	float a,b,c,u,v,w,x,y,z,m;
	scanf("%f%f%f",&a,&b,&c);
	scanf("%f%f%f",&x,&y,&z);
	u = a*40.0/50.0 + x*60.0/100.0;
	v = b*40.0/50.0 + y*60.0/100.0;
    w = c*40.0/50.0 + z*60.0/100.0;
    m = (u+v+w)/3;
    printf("%f %f  %f",u,v,w);
    printf("Median weighted score = %.2f\n",m);
	return 0; }