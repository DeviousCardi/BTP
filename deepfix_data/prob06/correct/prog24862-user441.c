#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y;
	scanf("%d%d%d%d ",&n,&m,&x,&y);
	int *a,*b;
	a=(int*)malloc((n)*sizeof(int));
	b=(int*)malloc((m)*sizeof(int));
	int i,j,k;
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	for(i=0;i<m;i++){
	    scanf("%d", &b[i]); }
	for(i=0;i<n;i++) {
	   for(j=0;j<m;j++) {
	        if((b[j]>=a[i]-x)&&(b[j]<=a[i]+y)) {
	            printf("%d %d\n",i+1,j+1);
	            k=1;
	            break; } }
	  if(k==1)
	   continue; }
	return 0; }