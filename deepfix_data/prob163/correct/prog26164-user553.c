#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,m;
    double a[500],b[500],c[1000];
    scanf("%d%d",&i,&j);
    for(m=1;m<=500;m++){
    scanf("%lf\n%lf",&a[m],&b[m]);
    c[m]=a[m]+b[m]; }
    printf("%0.0lf",c[m]);
	return 0; }