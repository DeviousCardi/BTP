#include <stdio.h>
#include <stdlib.h>
int main() {
	long int n,m,x,y;
	int i,j,k=0,flag=0;
	scanf("%ld%ld%ld%ld",&n,&m,&x,&y);
	int *a,*b,*u,*v;
	a=(int*)malloc(sizeof(int)*n);
	b=(int*)malloc(sizeof(int)*m);
	u=(int*)malloc(sizeof(int)*m);
	v=(int*)malloc(sizeof(int)*m);
	for(i=0;i<n;i++);
	scanf("%ld",&a[i]);
	for(i=0;i<m;i++)
	scanf("%ld",&b[i]);
	for(i=0;i<m;i++) {
	    for(j=0;j<n;j++) {
	        if((b[i]>=(a[j]-x))&&(b[i]<=(a[j]+y))) {
	          u[k]=j;
	          v[k]=i;
	          k++;
	          break; } } }
	printf("%d\n",k);
	for(i=0;i<k;i++) {
      printf("%d %d\n",u[i]+1,v[i]+1); }
	return 0; }