#include <stdio.h>
int main() {
    float a,b,c,sa=0,sb=0,sc=0,w=40.0;int i;
    for(i=1;i<=2;i++) {
        scanf("%f%f%f",&a,&b,&c);
        sa+=a*w/100.0;
        sb+=b*w/100.0;
        sc+=c*w/100.0;
        w=w+20; }
	if(a<=b&&b<=c)
	printf("%.2f",b);
	else if (b<=a&&a<=c)
	printf("%.2f",a);
	else if (b<=c&&c<=a)
	printf("%.2f",c);
	return 0; }