#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,j,k,i,count,flag=0,total;
	scanf("%d",&n);
	int num[n];
	for(i=0;i<n;i++)
	scanf("%d",&num[i]);
	total=0;
	for(j=0;j<n;j++) {
	     count=0;
	    for(k=j+1;k<n;k++)
	        if(num[k]<num[j])
	        flag=1;
	        count=count+1; }
	    if(flag==1)
	    printf("%d",count);
	    total=total+count; }
	printf("%d",total);
	if(flag==1)
	return 0; }