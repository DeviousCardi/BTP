#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,i,j,count=0;
	double x,y;
	scanf("%d%d%lf%lf",&n,&m,&x,&y);
	int *dsv;
	dsv=(int*)malloc(n*sizeof(int));
	for(i=0; i<n; i++)
	scanf("%d",&dsv[i]);
	int *sav;
	sav=(int*)malloc(m*sizeof(int));
	for(i=0; i<m; i++)
	scanf("%d",&sav[i]);
	int *a1;
	a1=(int*)malloc(n*sizeof(int));
	int *a2;
	a2=(int*)malloc(n*sizeof(int));
	for(i=0; i<n; i++) {
	    for(j=0; j<m; j++)
	    if(a[i]-x<=b[j]||b[j]<=a[i]+y) }
	return 0; }