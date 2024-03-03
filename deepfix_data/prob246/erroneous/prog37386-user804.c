#include <stdio.h>
int main() {
    int a; int b; int c;
    scanf("%d%d%d/n", &a,&b,&c);
    int A;int B; float H;
    A = sum = (a + b + c);
    B = product = (a*b*c);
    H = average =  (a + b +c)/3.0;
    printf("%d %d 0.3%f\n",  A, B, H);
	return 0; }