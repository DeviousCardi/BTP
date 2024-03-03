#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y;
	scanf("%d%d%d%d\n",&n,&m,&x,&y);
	int a[n],b[m],i,j,k=0,c[n],d[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<m;i++)
	scanf("%d",&b[i]);
	if(n==0||m==0)
	printf("0");
	else{
	   for(i=0;i<n;i++){
	        for(j=0;j<m;j++){
	            if((a[i]-x)<=b[j]  &&  b[j]<=(a[i]+y)){
	                c[k]=i+1;
	                d[k]=j+1;
	                k++; } } } }
	printf("%d",k-1;)
	return 0; }