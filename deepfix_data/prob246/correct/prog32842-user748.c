#include <stdio.h>
int main() {
 int a;
 int b;
 int c;
 scanf("%d%d%d",&a,&b,&c);
 int A;
 A=(a+b+c);
 int P;
 P=(a*b*c);
 float B=A/3;
 printf("%d\n%d\n%f",A,P,B);
	return 0; }