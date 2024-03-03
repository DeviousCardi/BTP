#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,a[100],b[100],i=1,j=1,k=0,t=0,f=0;
	scanf("%d %d %d %d",&n,&m,&x,&y);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=m;i++)
	scanf("%d",&b[i]);
	for(i=t;i<=n;i++){
    for(j=f;j<=m;j++){
	    if(b[j]>=a[i]-x&&b[j]<=a[i]+y){
	        k++;
	        printf("%d %d\n",i,j);t=i;f=j;break; } } }
	printf("%d",k);
	return 0; }