#include <stdio.h>
#include <stdlib.h>
int main() {
	long int x,y;
	int n,m,i,j,k=0;
	scanf("%d%d%ld%ld",&n,&m,&x,&y);
	long int *a,*b;
	int mat[m][2];
	a=(long int*)malloc(sizeof(long int)*n);
	b=(long int*)malloc(sizeof(long int)*m);
	for(i=0;i<n;i++)
	scanf("%ld",&a[i]);
	for(i=0;i<m;i++)
	scanf("%ld",&b[i]);
	for(i=0;i<n;i++) {
	    for(j=k;j<m;j++) {
	            if((a[i]-x<=b[j])&&(a[i]+y>=b[j])) {
	              mat[k][0]=i+1;
	              mat[k][1]=j+1;
	              k++;
	              j++;
	              break; } } }
    printf("%d\n",k);
    for(i=0;i<k;i++)
    printf("%d %d\n",mat[i][0],mat[i][1]);
	return 0; }