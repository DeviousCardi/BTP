#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,a,b;
	scanf("%d%d%d%d\n",&n,&m,&a,&b);
	int *sol=(int*)malloc(n*sizeof(int));
	int *vest=(int*)malloc(m*sizeof(int));
	int i=0,j=0;
	for(i=0;i<n;i++) {
	    scanf("%d",&sol[i]); }
	for(j=0;j<m;j++) {
	    scanf("%d",&vest[j]); }
	i=0;j=0;
	int count = 0;
	for(i=0;i<n;i++) {
	    for(j=0;j<m;j++) {
	        if(vest[j]<=sol[i]+b&&vest[j]>=sol[i]-a) {
	            count++;
	            vest[j]=-100;
	            printf("%d %d\n",i+1,j+1); } } }
	printf("%d",count);
	free(vest);
	free(sol);
	return 0; }