#include <stdio.h>
int main() {
	int N, d, b[20], a[30], i, j;
	scanf("%d%d",&d,&N);
	for(i=0;i<d;i++)
	{  scanf("%d",&b[i]);
	   a[i]=b[i]; }
	for(i=d;i<=N;i++) {
	    a[i]=0;
	    for(j=0;j<=d;j++)
	      a[i]+=b[i-j]; }
	printf("%d",A[N]);
	return 0; }