#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,a[100],b[100],i,j=1,k=0;
	scanf("%d %d %d %d",&n,&m,&x,&y);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=m;i++)
	scanf("%d",&b[i]);
	for(i=1;i<=n;i++){
	    if(b[j]>=a[i]-x&&b[j]<=a[i]+y){
	        k++;
	        printf("%d %d\n",i,j);break; }
	    j++; }
	printf("%d",k);
	return 0; }