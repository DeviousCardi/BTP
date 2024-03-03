#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int l[501],q[501],a,b,i=1,j=1,k,p;
	long  x,z,t;
	scanf("%d%d",&a,&b);
	scanf("%ldld",&x,&z);
	for(i=1;i<=a;i++){
	    k=x%pow(10,i);
	    x=k;
	    k=l[i];
	    scanf("%d",&l[i]); }
	for(j=1,j<=b;j++){
	    p=z%pow(10,j);
	    z=p;
	    z=q[j];
	    scanf("%d",&q[j]); }
	t=x+z;
	printf("%lld",t);
	return 0; }