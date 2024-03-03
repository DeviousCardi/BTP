#include <stdio.h>
int main() {
    float a1,a2,b1,b2,c1,c2,a,b,c;
    scanf("%f%f%f",&a1,&b1,&c1);
    scanf("%f%f%f",&a2,&b2,&c2);
    a=((a1*0.8))+((a2*0.6));
    b=((b1*0.8))+((b2*0.6));
    c=((c1*0.8))+((c2*0.6));
    printf("Median weighted score = ")
    if((a<b&&b<c)||a>b&&b>c)
    printf("%.2f",b);
    if((a<c&&c<b)||a>c&&c>b)
    printf("%.2f",c);
    if((b<a&&a<c)||b>a&&a>c)
    printf("%.2f",a);
	return 0;}