#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,i,j;
	scanf("%d %d %d %d",&n,&m,&x,&y);
	int *a,*b;
	a=(int*)malloc(n*sizeof(int));
	b=(int*)malloc(m*sizeof(int));
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	for(i=0;i<m;i++){
	    scanf("%d",&b[i]); }
	for(i=0;i<n;i++){
	    for(j=0;j<m;j++){
	        if(a[i]==b[j]){
	            printf("%d %d",i+1,j+1); } } }
	return 0; }