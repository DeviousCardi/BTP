#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m;
	long x,y;
	scanf("%d %d %ld %ld",&n,&m,&x,&y);
	long *a=(long*)malloc(n*sizeof(int));
	long *b=(long*)malloc(m*sizeof(int));
	int i,k=0,j;
	for(i=0;i<n;i++){
	scanf("%ld",(a+i)); }
	for(i=0;i<m;i++){
	scanf("%ld",(b+i)); }
	for(i=0;i<m;i++){
	    for(j=0;j<n;j++){
	        if((*(a+j)-x<=*(b+i))&&(*(b+i)<=*(a+j)+y)){
	        k++;
	        break; }
	        else
	        continue; } }
	printf("%d\n",k);
	return 0; }