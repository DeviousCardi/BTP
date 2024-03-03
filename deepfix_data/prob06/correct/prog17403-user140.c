#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,i,j,k=0;
	scanf("%d %d %d %d\n",&n,&m,&x,&y);
	int a[n],b[m],c[n][2];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<m;i++)
	{scanf("%d",&b[i]);
	printf("%d \n",b[i]);}
	for(i=0;i<n;i++) {
	    for(j=0;j<m;j++)
	     if(a[i]-x<=b[j]&&a[i]+y>=b[j]) {
	         c[k][0]=i+1;
	         c[k][1]=j+1;
	         k+=1; } }
	printf("%d\n",k);
	for(i=0;i<k;i++) {
	    printf("%d %d\n",c[k][0],c[k][1]); }
	return 0; }