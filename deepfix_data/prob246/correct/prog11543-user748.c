#include <stdio.h>
int main() {
 int a;
 int b;
 int c;
 scanf("%d",&a,&b,&c);
 int A;
 A=(a+b+c);
 int P;
 P=a*b*c;
 float B;
 B=(a+b+c)/3;
 printf("%d" ,A,P);
 printf("%.3f",B);
	return 0; }