#include <stdio.h>
int main() {
    int a; int b; int c;
    scanf("%d%d%d/n", &a,&b,&c);
    int A;int B; float H;
    A = (a + b + c);
    B  = (a*b*c);
    H  =  (a + b +c)/3.0;
    printf("%d\n%d\n 0.3%f",  A, B, H);
	return 0; }