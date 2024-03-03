#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,i,j=0,k=0;
	int *a,*b;
	scanf("%d %d %d %d\n",&n,&m,&x,&y);
	a=(int*)malloc(n*sizeof(int));
	b=(int*)malloc(m*sizeof(int));
	int pair[2][n];
	for(i=0;i<n;i++)
	  scanf(" %d",(a+i));
	scanf("\n");
	for(i=0;i<m;i++)
	  scanf(" %d",(b+i));
	for(i=0;i<n;i++) {
	 for(j=k;j<m;j++) {
	     if(((a[i]-x)<b[i])&&((a[i]+y)>b[i])) {
	         pair[0][k]=i;
	         pair[1][k]=j;
	         k++;
	         break; } } }
	printf("%d",k);
	for(j=0;j<k;j++) {
	    printf("%d %d\n",pair[0][k],pair[1][k]); }
	return 0; }