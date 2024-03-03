#include <stdio.h>
int main() {
	int d,N,b[100],i,sum=0;
	scanf("%d %d",&d,&N);
	for(i=0;i<d;i++)
	scanf("%d",&b[i]);
	if(N>=0 && N<=30 && N<d)
	printf("%d",b[N]);
	else if(N>=0 && N<=30 && N>=d) {
	    for(i=0;i<d;i++) {
	        sum=sum+b[i]; }
	    printf("%d",sum); }
	return 0; }