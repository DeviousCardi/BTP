#include <stdio.h>
#include <stdlib.h>
int main() {
	long int n,m,x,y,temp=0;
	int i,j,k=0;
	scanf("%ld%ld%ld%ld",&n,&m,&x,&y);
	int *a,*b,*u,*v;
	a=(int*)malloc(sizeof(int)*n);
	b=(int*)malloc(sizeof(int)*m);
	u=(int*)malloc(sizeof(int)*100);
	v=(int*)malloc(sizeof(int)*100);
	for(i=0;i<n;i++);
	scanf("%d",&a[i]);
	for(i=0;i<m;i++)
	scanf("%d",&b[i]);
	for(i=0;i<n;i++) {
	    for(j=0;j<m;j++) {
	        if(b[j]>=(a[i]-x) && b[j]<=(a[i]+y) && b[j]!=0) {
	          b[j]=0;
	          u[k]=i+1;
	          v[k]=j+1;
	          k++;
	          break; } } }
	printf("%d\n",k);
	for(i=0;i<k;i++) {
      printf("%d %d\n",u[i],v[i]); }
	return 0; }