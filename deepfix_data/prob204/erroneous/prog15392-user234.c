#include <stdio.h>
#include <stdlib.h>
int main() {
    int x,y,z,rev;
    printf("Enter integer");
    scanf("%d",&x);
    z=0;
    y=x%10;
    z=z*10+y;
    if (rev==x) {
        printf("YES");
        else
        printf ("NO"); }
	return 0; }