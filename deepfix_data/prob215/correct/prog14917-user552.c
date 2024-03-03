#include <stdio.h>
#include <stdlib.h>
int main() {
	int a;
	int i;
	int sum;
	sum=0;
	scanf("%d",&a);
	if(a>0);
	    for(i=1;i<=a;i++){
	        sum=sum+i;
	        if(a%i==0&&a==sum)
	        printf("Yes");
	        else
	        printf("No"); }
	return 0; }