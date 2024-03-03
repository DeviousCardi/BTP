#include <stdio.h>
#include <stdlib.h>
int main() {
	long int a,b,c,d,*x,*y;
	scanf("%ld%ld%ld%ld",&a,&b,&c,&d);
	x=(long int*)malloc(a*sizeof(long int));
	y=(long int*)malloc(b*sizeof(long int));
	int i,j;
	int p[a],q[a];
	for (i=0;i<=a;i++) {
	    scanf("%ld"&x[i]); }
	for (j=0;j<=b;j++) {
	    scanf("%ld",&y[j]); }
	int k=0,int m=0;int n=0;
	while (m<=a&&n<=b) {
	    if (x[m]-c<=y[n]&&y[n]<=x[m]+d) {
	        p[k]=m;
	        q[k]=n;
	        k++;m++;n++; }
	    else if (x[m]-c<=y[n]) n++;
	    else if (y[n>=x[m]+d]) m++;
	    printf("%d\n",n-1);
	    for (i=0;i<k;i++) {
	        printf("%d%d\n",p[i],q[i]); } }
	return 0; }