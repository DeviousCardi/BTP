#include <stdio.h>
#include <stdlib.h>
int main() {
	int sum=0,n,*ary,i,count=0;
	scanf("%d",&n);
	ary=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
	    scanf("%d",&ary[i]);
	    sum=sum+ary[i]; }
	while(count<=(sum/2)){
	    count++; }
	printf("%d %d",count,sum-count);
	return 0; }