#include <stdio.h>
#include <stdlib.h>
int main() {
	int size,a[10000],i,k,count,prev=0,num;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	        scanf("%d",&a[i]);
	for(i=0;i<size;i++)
	    {      k=i;
               count=1;
	        while(a[i]==a[k]) {
	                count++;
	                i++; }
	                if(prev<count) {
	                            prev=count;
	                            num=a[k]; } }
	printf("%d",num);
	return 0; }