#include <stdio.h>
#include <stdlib.h>
int main() {
    double n;
	double i, sum=0;
	scanf("%lf",&n);
	for(i=1; i<=n/2; i++){
	    if(int(n%i==0))
	    sum=sum+i; }
	if(sum==n)
	    printf("YES");
	else printf("NO");
	return 0; }