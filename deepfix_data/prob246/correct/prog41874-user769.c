#include <stdio.h>
int main() {
int a;
int b;
int c;
int s;
int p;
float v;
scanf("%d%d%d",&a,&b,&c);
s=a+b+c;
p=a*b*c;
v=(a+b+c)/3.0;
printf("%d\n%d\n%.3f",s,p,v);
	return 0; }