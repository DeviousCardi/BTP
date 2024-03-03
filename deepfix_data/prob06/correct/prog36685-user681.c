#include <stdio.h>
#include <stdlib.h>
int main() {
	long int n,m,x,y;
	int i,j,k=0,temp=0;
	scanf("%ld %ld %ld %ld",&n,&m,&x,&y);
	int *a,*b,*u,*v;
	a=(int*)malloc(sizeof(int)*n);
	b=(int*)malloc(sizeof(int)*m);
	u=(int*)malloc(sizeof(int)*m);
	v=(int*)malloc(sizeof(int)*m);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<m;i++)
	scanf("%d",&b[i]);
	for(i=0;i<m;i++) {
	    for(j=temp;j<n;j++) {
	        if((a[j]-x)<=b[i] && (a[j]+y)>=b[i]) {
	          u[k]=j+1;
	          v[k]=i+1;
	          k++;
	          temp=j+1;
	          break; } } }
	printf("%d\n",k);
	for(i=0;i<k;i++) {
      printf("%d %d\n",u[i],v[i]); }
	return 0; }