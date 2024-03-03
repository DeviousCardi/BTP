#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,*ary,i,count=0,sum1=0,sum2=0,check=0;
	float sum=0;
	scanf("%d",&n);
	ary=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
	    scanf("%d",&ary[i]);
	    sum=sum+ary[i]; }
	while(check<=(sum/2)){
	    count++;
	    check=check+ary[count]; }
	sum1=check+ary[count];
	for(i=n-1;i>count;i--){
	    sum2=sum2+ary[i]; }
	if(sum1<=sum2)
	count++;
	printf("%d %d",count,n-count);
	return 0; }