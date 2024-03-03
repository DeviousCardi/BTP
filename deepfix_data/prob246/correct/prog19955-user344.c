#include <stdio.h>
int main() {
    int x,y,z;
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    int sum=x+y+z;
    int product=x*y*z;
    float average=(float)(x+y+z)/3;
    printf("%d\n", sum);
    printf("%d\n", product);
    printf("%.3f\n", average);
	return 0; }