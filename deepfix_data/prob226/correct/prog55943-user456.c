#include <stdio.h>
int main() {
	int d,N,a[d],i,j,c=0;
	scanf("%d %d\n",&d,&N);
	for(i=0;i<d;i++)
	scanf(" %d",&a[i]);
	if(N<d) {
	    printf(a[N]); }
	else {
	    for(j=0;j<N;j++)
	    c+=a[j];
	    printf("%d",c); }
	return 0; }