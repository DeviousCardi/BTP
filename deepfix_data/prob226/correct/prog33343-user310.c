#include <stdio.h>
int main() {
	int N, d, i, j;
	int b[20];
	int a[31];
	scanf("%d ", &d);
	scanf("%d", &N);
	for(i=0;i<d;i++)
	    scanf("%d", &b[i]);
	for(i=0;i<d;i++) {
	    a[i]= b[i]; }
	for (i=d;i<=N;i++) {
	    a[i]=0;
	    for(j=1;j<=d;j++)
	     {   a[i]+=a[i-j]; } }
	printf("%d", a[N]);
	return 0; }