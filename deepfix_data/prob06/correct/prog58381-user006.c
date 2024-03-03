#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,x,y,i,j;
	int *a,*b,count=0,outarr[100];
	scanf("%d%d%d%d",&n,&m,&x,&y);
	a=(int*)malloc(n*sizeof(int));
	b=(int*)malloc(m*sizeof(int));
	for(i=0;i<n;i++)
	   scanf("%d",a+i);
	for(i=0;i<m;i++)
	   scanf("%d",b+1);
	for(i=0;i<m;i++) {
	    for(j=count;j<n;j++) {
	        if(b[i]>=a[j]-x && b[j]<=a[j]+y) {
	              outarr[2*count]=j+1;
	              outarr[2*count+1]=i+1;
	              count++; } } }
	printf("%d",count);
	return 0; }