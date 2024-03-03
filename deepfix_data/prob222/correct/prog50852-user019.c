#include <stdio.h>
int main() {
    float a1,a2,b1,b2,c1,c2,a,b,c,temp;
    scanf("%f%f%f",&a1,&b1,&c1);
    scanf("%f%f%f",&a2,&b2,&c2);
    a=(0.8)*a1+(0.6)*a2;
    b=(0.8)*b1+(0.6)*b2;
    c=(0.8)*c1+(0.6)*c2;
    if(a>b) {
        temp=a;
        a=b;
        b=temp; }
    if(b>c&&c>a) {
        temp=c;
        c=b;
        b=temp; }
    if(c<a) {
        temp=b;
        b=a;
        a=c;
        c=temp; }
	printf("Median weighted score=%0.2f",b);
	return 0; }