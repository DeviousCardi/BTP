#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y;
	scanf("%d%d%d%d ",&n,&m,&x,&y);
	int *a,*b;
	a=(int*)malloc(n*sizeof(int));
	b=(int*)malloc(m*sizeof(int));
	int i,j;
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]);
	    printf("%d",a[10]); }
	for(i=0;i<m;i++){
	    scanf("%d", &b[i]); }
	for(j=0;j<m;j++){
	    for(i=0;j<n;i++){
	        if((b[j]>=a[i]-x)&&(b[j]<=a[i]+y)){
	            printf("%d %d\n",i+1,j+1);
	            break; } } }
	return 0; }