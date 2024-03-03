#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,Time=0;
	int *t;
	scanf("%d\n",&n);
	t=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	    scanf("%d",(t+i));
	i=0;
	j=n;
	while((j-i)!=1) {
	    if((t[i]==Time)&&(j!=i+1))
	      i++;
	    if((t[j]==Time)&&(i!=j-1))
	       j++;
	   Time++; }
	printf("%d %d",i+1,n-j);
	return 0; }