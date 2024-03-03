#include <stdio.h>
#include <stdlib.h>
int main() {
    float a,b,n;
    float s, h,i,term;
    h=0.0;
    scanf("%f %f %f",&a,&b,&n);
 for(i=a;i<=b;i=i+((b-a)/n)){
    term=(-2*i*i*i+8*i);
    if(term<0){
        term=(-)*(term); }
    else{
    term=term; }
    h=h+term;
    s=(b-a)*h;
    printf("%f",s); }
	return 0; }