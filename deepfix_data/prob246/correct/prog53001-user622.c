#include <stdio.h>
int main() {
    int x;
    int y;
    int z;
    scanf("%d,%d,%d",&x,&y,&z);
    int S,P;
    float AV;
    S=x+y+z;
    P=x*y*z;
    AV=(x+y+z)/3;
    printf("%d,%d,%.3f",S,P,AV);
	return 0; }