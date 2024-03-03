#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[100],i,j,n,sum1=0,sum2=0,count1=0,count2=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	i=0;
	j=n-1;
	while(i>=0 && j<n){
	    sum1 = sum1 + a[i];
	    sum2 = sum2 + a[j];
	    if(sum1>sum2)
	    count1++;
	    else
	    count2++;
	    if(sum1==sum2){
	    count1++;
	    count2++;}
	    i++;
	    j--;
	    if(count1+count2==n)
	    break; }
	printf("%d %d",count1,count2);
	return 0; }