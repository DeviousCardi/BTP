#include <stdio.h>
int main() {
    float a,b,c,sa=0,sb=0,sc=0;int i,w=40,m=50;
    for(i=1;i<=2;i++) {
        scanf("%f%f%f",&a,&b,&c);
        sa+=a*w/m;
        sb+=b*w/m;
        sc+=c*w/m;
        w=w+20;m=m+50; }
	if(a<=b&&b<=c)
	printf("%.2f",sb);
	else if (b<=a&&a<=c)
	printf("%.2f",sa);
	else if (b<=c&&c<=a)
	printf("%.2f",sc);
	return 0; }