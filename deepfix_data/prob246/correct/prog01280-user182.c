#include <stdio.h>
int main() {
int a,b,c,s,m;
float g;
scanf("%d%d%d",&a,&b,&c);
s=a+b+c;
m=a*b*c;
g=(a+b+c)/3.0;
printf("sum=%d\n",s);
printf("%d\n",m);
printf("%.3f",g);
	return 0; }