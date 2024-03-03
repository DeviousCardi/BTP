#include <stdio.h>
int main() {
	int A;
	scanf("%d",&A);
	int B;
	scanf("%d",&B);
	int C;
	scanf("%d",&C);
	int a=A+B+C;
	int b=A*B*C;
	float c=(a/3.0);
	printf("%d\n %d\n %.3f",a,b,c);
	return 0; }