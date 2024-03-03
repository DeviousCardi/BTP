#include <stdio.h>
float fmarks(float m,float e) {
    float f = m*40/50 + f*60/100;
    return f; }
int main() {
    float m1,m2,m3;
    float e1,e2,e3;
    float f1,f2,f3;
    scanf("%f %f %f",&m1,&m2,&m3);
    scanf("%f %f %f",&e1,&e2,&e3);
    f1 = fmarks(m1,e1);
    f2 = fmarks(m2,e2);
    f3 = fmarks(m3,e3);
    printf("%f %f %f",f1,f2,f3);
	return 0; }