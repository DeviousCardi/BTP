#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,a,b;
	scanf("%d,%d%d%d",&n,&m,&a,&b);
	int *sol=(int*)malloc(n*sizeof(int));
	int *vest=(int*)malloc(m*sizeof(int));
	int i=0,j=0;
	for(i=0;i<n;i++) {
	    scanf("%d",&sol[i]); }
	for(j=0;j<m;j++) {
	    scanf("%d",&vest[j]); }
	while(i<n||j<m) {
	    if(vest[j]<=sol[i]+b && vest[j]>=sol[i]-b)
	    {i++;
	        printf("%d %d",i+1,j+1); }
	    j++; }
	return 0; }