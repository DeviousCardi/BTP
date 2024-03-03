#include <stdio.h>
int main() {
    int x;
    int y;
    int z;
    int S,P;
    float AV;
    scanf("%d,%d,%d",&x,&y,&z);
    S=x+y+z;
    P=x*y*z;
    AV=(x+y+z)/3;
    printf("%d,%d,%.3f",S,P,AV);
	return 0; }