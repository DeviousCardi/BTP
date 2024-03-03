#include <stdio.h>
#include <stdlib.h>
int main() {
    int x,y,z,rev;
    scanf("%d",&x);
    z=0;
    y=x%10;
    z=z*10+y;
    x=x/10;
    if (rev==x) {
        printf("YES"); }
    else
    printf("NO");
	return 0; }