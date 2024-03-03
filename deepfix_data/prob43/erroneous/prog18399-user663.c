#include <stdio.h>
#include <stdlib.h>
int main() {
	float f(float e) {
	        int f;
	        b=3*e-e*e;
	        return f; }
    float g(float c) {
            int d;
            d=2*c*c*c-c*c-5*c;
            return d; }
    int n,i;
    float a,b,interval,val=0,sum=0,area;
    scanf("%f %f %d",&a,&b,&n)
    interval=(b-a)/n;
    for(i=a;i<b;i=i+interval) {
            val=f(i)-g(i);
                if (val<0) {
                        val=-(val); }
            sum=sum+val; }
    area=interval*sum;
    return 0; }