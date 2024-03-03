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
 printf("%d\n%d\n%f",A,P,float(A/3));
	return 0; }