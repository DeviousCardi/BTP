#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,*ary,i,count=0,check=0;
	float sum=0;
	scanf("%d",&n);
	ary=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
	    scanf("%d",&ary[i]);
	    sum=sum+ary[i]; }
	while((sum-check)>=(sum/2)){
	    check=check+ary[count];
	    count++; }
	printf("%d %d",count,n-count);
	return 0; }