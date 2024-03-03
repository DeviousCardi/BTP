#include <stdio.h>
int main() {
    int x,y,z;
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    int sum=x+y+z;
    int product=x*y*z;
    float average=(x+y+z)/3;
    printf("%d", sum\n);
    printf("%d", product\n);
    printf("%f", average\n);
	return 0; }