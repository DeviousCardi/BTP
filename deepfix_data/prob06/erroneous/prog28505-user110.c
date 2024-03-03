#include <stdio.h>
#include <stdlib.h>
int main() {
	long int n,m,x,y;
	int *a,*b;
	int i,j,k=0;
	scanf("%ld %ld %ld %ld\n",&n,&m,&x,&y);
	int p[n],q[n];
	a=(int*)malloc(n*sizeof(int));
	b=(int*)malloc(m*sizeof(int));
	for(i=0;i<n;i++)
	scanf("%d ",&a[i]);
	scanf("\n");
	for(i=0;i<m;i++)
	scanf("%d ",&b[i]);
	for(i=0;i<n;) {
	  if(b[i]-a[j]>=-x&&b[i]-a[j]<=y) {
	    c[k]=i+1;d[k]=j+1;
	    k++;
	    i++;
	    j++; }
	 else if(b[i]-a[j]<-x)
	 i++;
	 else if(b[i]-a[j]>y)
	j++;
	return 0; }