#include <stdio.h>
#include <stdlib.h>
int main() {
    float a,b,n;
    float s, h,i,term;
    h=0.0;
    scanf("%f %f %f",&a,&b,&n);
 for(i=a;i<=b;i=i+((b-a)/n)){
    term=-(2*i*i*i)+(8*i);
    if(term<0){
        s=(-1)*(term)*((b-a)/n); }
    else{
    s=term*((b-a)/n); }
    h=h+s;
    if((b-a)==0)
    printf("0.0000");}
    printf("%.4f",h);
	return 0; }