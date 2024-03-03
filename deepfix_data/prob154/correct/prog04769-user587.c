#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	double a,b,area,diff,sum=0,f,x[n];
	scanf("%lf%lf%d",&a,&b,&n);
	diff=((b-a)/n);
	if(a<=-1&&b<=-1&&a<b)
	area=(b-a);
	else if(a<=-1&&b>-1&&b<=1) { {
	    for(i=1;i<=(n-1);i++)
	    x[0]=diff+a;
	    x[i]=diff+x[i-1];
	    f=(((diff)+(x[i]))*((diff)+(x[i])));
	    sum=sum+f; }
	area=(diff)*(sum); }
	printf("%.4lf",area);
	return 0; }