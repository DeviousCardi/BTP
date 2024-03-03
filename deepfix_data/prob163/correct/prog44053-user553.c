#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j;
    double a[500],b[500],c[1000];
    scanf("%d%d%lf%lf",&i,&j,&a[500],&b[500]);
    c[1000]=a[500]+b[500];
    printf("%lf",c[1000]);
	return 0; }