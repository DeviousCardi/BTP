#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,count,sum;
	scanf("%d",&n);
	for(i=1,i<=n,i++) {
	    sum=0;count=0;
	    for(j=1,j<=i/2,j++) {
	        if(i%j==0)
	        printf("%d",j);
	        sum=sum+j;
	        count=count+1; } }
	    printf("%d",sum);
	    if(i==sum)
	    {    printf("Yes");}
	    else
	    {    printf("No");}
	return 0; }