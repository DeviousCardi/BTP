#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int n,i,j,k;
	double a,b,area1,area2,area3,area;
	scanf("%lf%lf",&a,&b);
	scanf("%d",&n);
	if(a<=(-1) && (b<=(-1)))
	    area1=0;
	    for(i=0;i<=n;i++){
	        area1=area1+(((b-a)/n)); }
    if(a>=(-1) && b>=(-1) && a<=1 && b<=1)
	    area2=0;
	    for(j=0;j<=n;j++){
	        area2=area2+((a+(j*((b-a)/n)))*(a+(j*((b-a)/n)))*((b-a)/n)); }
    if(a>=1 && b>=1)
	    area3=0;
	    for(k=0;k<=n;k++){
	        area3=area3+((a+(k*((b-a)/n)))*(a+(k*((b-a)/n)))*(a+(k*((b-a)/n)))*((b-a)/n)); }
	area=area1+area2+area3;
	printf("%.4lf",area);
	return 0; }