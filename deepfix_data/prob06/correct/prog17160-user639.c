#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,i,j,a[99],b[99],count=0;
	scanf("%d ",&n);
	scanf("%d ",&m);
	scanf("%d ",&x);
	scanf("%d\n",&y);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(j=0;j<m;j++)
	scanf("%d ",&b[j]);
	for(i=0;i<n;i++){
	    for(j=0;j<m;j++){
	        if(a[i]-x<=b[j]&&a[i]+y>=b[j])
	        count=count+1; } }
	printf("%d",count);
	return 0; }