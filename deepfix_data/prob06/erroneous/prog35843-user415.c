#include <stdio.h>
#include <stdlib.h>
int main() {
	int *n,*m,*x,*y,k=0;
	scanf("%d%d%d%d",n,m,x,y);
	int *a,*b,i,j;
	for(i=0;i<*n;i++)
	scanf("%d ",*(a+i));
	for(i=0;i<*m;i++)
	scanf("%d ",*(b+i));
	for(i=0;i<*n;i++){
	    for(j=0;j<*m;j++){
	        if((*(a+i)-x<=*(b+j))&&(*(a+i)+y>=*(b+j)))
	        k=k+1; } }
	printf("%d",k);
	printf("\n%d %d",*(a+i),*(b+j));
	printf("\n%d %d",*(a+i),*(b+j));
	if((*(a))
	return 0; }