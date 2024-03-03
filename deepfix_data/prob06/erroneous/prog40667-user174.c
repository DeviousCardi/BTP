#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m;long int x,y;
	int i,j;int a*,b*;int c[100][3];
	scanf("%d",&n);
	scanf("%d",&m);
	scanf("%ld",&x);
	scanf("%ld",&y);
	a=(int*)malloc(n*sizeof(int));
	b=(int*)malloc(m*sizeof(int));
	for(i=0;i<n;i++)
	scanf("%d",a+i);
	for(i=0;i<m;i++)
	scanf("%d",b+i);
	for(i=0;i<n;i++) {
	    for(j=0;j<m;j++) {
	        if(c[j][0]=1)
	        continue;
	        if(a[i]-x<=b[j]&&b[j]<=a[i]+y) {
	            c[j][0]=1;
	            c[j][1]=i;
	            c[j][2]=j;
	            break; } } }
	for(i=0;i<n;i++) {
	   if(c[i][0]==1) {
	            printf("%d %d\n",c[i][1],c[i][2]); } } }
	return 0; }