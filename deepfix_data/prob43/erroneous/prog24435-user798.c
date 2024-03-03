#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int i,n;
    double a,b,area=0;
    scanf("%lf%lf",&a,&b);
    scanf("%d",&n);
    int d=(b-a)/n.0;
    int x=a;
    int f,g;
    for(i=1;i<=n;i++) {
        f=-pow(x,2)+3*x ;
        g=2*pow(x,3)-pow(x,2)-5*x ;
        if(f>g) {
            area=area+(f-g)*d ; }
        else {
            area=area+(g-f)*d ; }
        x=x+d; }
    printf("%.4lf",area);
	return 0; }