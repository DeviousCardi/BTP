#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y;
	scanf("%d%d%d%d",&n,&m,&x,&y);
	int *a=(int *)malloc(n*sizeof(int));
	int *b=(int *)malloc(m*sizeof(int));
	int i;
	for(i=0;i<n;i++)
	scanf("%d",(a+i));
	for(i=0;i<m;i++)
	scanf("%d",(b+i));
	int j,start=0,count=0;
	for(i=0;i<n;i++) {
	    for(j=start;j<m;j++) {
	        if(a[i]-x<=b[j]&&a[i]+y>=b[j]) {
	            count++;
	            start=j+1; } } }
	printf("%d",count);
	return 0; }