#include <stdio.h>
int main() {
    int x,y,z;
    int S,P;
    float AV;
    scanf("%d,%d,%d",&x,&y,&z);
    S=x+y+z;
    P=x*y*z;
    AV=(x+y+z)/3.0;
    printf("%d\n%d\n%.3f",S,P,AV);
	return 0; }