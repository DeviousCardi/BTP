#include <stdio.h>
int main() {
    int x;
    int y;
    int z;
    int S,P;
    float AV;
    scanf("%d,%d,%d",&x,&y,&z);
    S=x+y+z;
    printf("%d\n",S);
    P=x*y*z;
    printf("%d\n",P);
    AV=(x+y+z)/3;
    printf("%.3f",AV);
	return 0; }