#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,m,x,y;
	int count=0,k=0;
	scanf("%d%d%d%d",&n,&m,&x,&y);
	int*a=(int*)malloc(n*sizeof(int));
	int*b=(int*)malloc(m*sizeof(int));
	int c[100];
	int d[100];
	for(i=0;i<n;i++){
	    scanf("%d",&*(a+i)); }
	for(i=0;i<m;i++){
	    scanf("%d",&*(b+i)); }
	for(i=0;i<n;i++){
	  for(j=0;j<m;j++){
	          if((b[j]>=a[i]+x || b[j]<=a[i]+y) && j>k ){
	              count++;
	              c[k]=i+1;
	              d[k]=j+1;
	              k++; } } }
	        printf("%d\n",count);
	        for(i=0;i<k;i++){
	            printf("%d %d\n",c[i],d[i]); }
	return 0; }