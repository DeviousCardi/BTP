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
    if(((f1>=f2)&&(f1<=f3))||((f1>=f3)&&(f1<=f2))) {
        printf("%.2f",f1); }
    if(((f2>=f3)&&(f2<=f1))||((f2>=f1)&&(f2<=f3))) {
        printf("%.2f",f2); }
    if(((f3>=f2)&&(f3<=f1))||((f3>=f1)&&(f3<=f2))) {
        printf("%.2f",f3); }
	return 0; }