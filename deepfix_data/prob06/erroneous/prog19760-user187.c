#include <stdio.h>
#include <stdlib.h>
int main() {
	long int n,m,x,y,sum=0;
	int *a,*b,*p,*q,i,j,k=0;
	scanf("%ld %ld %ld %ld",&n,&m,&x,&y);
	a=(int *)malloc(n*si;zeof(int));
	b=(int *)malloc(m*sizeof(int))
	p=(int *)malloc(m*sizeof(int))
	q=(int *)malloc(m*sizeof(int))
	for(i=0;i<n;i++) {
	        scanf("%d ",&a[i]); }
	for(i=0;i<m;i++) {
	        scanf("%d ",&b[i]); }
	for(i=0;i<n;i++) {
	        for(j=0;j<m;j++) {
	                if((a[i]-x)<=b[j] && (a[i]+y)>=b[j] && b[j]!=0) {
	                        b[j]=0;
	                        sum++;
	                        p[k]=i;
	                        q[k]=j;
	                        k++; } } }
	printf("%ld\n",sum);
	for(i=0;i<k;i++) {
	        printf("%d %d",p[i],q[i]) }
	return 0; }