#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,*ary,i,count=0;
	float sum=0;
	scanf("%d",&n);
	ary=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
	    scanf("%d",&ary[i]);
	    sum=sum+ary[i]; }
	int check=ary[0];
	while(check<=(sum/2)){
	    count++;
	    check=check+ary[count]; }
	printf("%d %d",count,n-count);
	return 0; }