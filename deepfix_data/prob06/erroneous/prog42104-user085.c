#include <stdio.h>
#include <stdlib.h>
int main() {
	int m,n,x,y,i;
	scanf("%d%d%d%d",&n,&m,&x,&y);
	int *a,*b;
	a=(int *)malloc(n*sizeof(int));
	b=(int*)malloc(m*sizeof(int));
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=m;i++)
	scanf("%d",&b[i]);
	int j,count=0,arr1[m],arr2[m],k=0;
	for(i=1;i<=n;i++) {
	    j=1;
	    while(j<=m) {
	        if(a[i]-x<=b[j] && a[i]+y>=b[j]) {
	            count++;
	            arr1[k]=i;
	            arr2[k]=j;
	            k++;
	            b[j]=-10;
	            break; } } }
	int **res;
	re
	return 0; }