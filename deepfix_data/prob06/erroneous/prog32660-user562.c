#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,sold[10000],vest[1000],i,j,a[50][50],count=0;
	scanf("%d%d%d%d",&n,&m,&x,&y);
	for(i=0;i<n;i++)
	scanf("%d",&sold[i]);
	for(i=0;i<m;i++)
	scanf("%d",&vest[i]);
	if(n*m==0){
	printf("0");
	return 0;}
	for(i=0;i<n;i++) {
	    for(j=0;j<m;j++) {
	        if(sold[i]<=vest[j]+y && sold[i]>=vest[j]-x) {
	            a[ii][0]=i;
	            a[ii++][1]=j;
	            count++;
	            vest[j]=-100000;
	           break; } }
	    printf("%d\n",count)
	    for(i=0;i<ii;i++) {
	        printf(%d %d\n,a[i][0],a[i][1]); } }
	return 0; }