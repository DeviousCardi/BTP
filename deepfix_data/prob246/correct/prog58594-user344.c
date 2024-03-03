#include <stdio.h>
int main() {
    float x,y,z;
    scanf("%f", &x);
    scanf("%f", &y);
    scanf("%f", &z);
    int sum=x+y+z;
    int product=x*y*z;
    float average=(x+y+z)/3;
    printf("%d\n", sum);
    printf("%d\n", product);
    printf("%.3f\n", average);
	return 0; }