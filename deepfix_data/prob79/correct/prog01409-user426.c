#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,*ary,i,count=0,sum1=0,sum2=0;
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
	sum1=check-ary[count];
	sum2=sum-check;
	if(sum1<=sum2)
	count++;
	printf("%d %d",count,n-count);
	return 0; }