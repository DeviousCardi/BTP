#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,flag=1;
	int array[20];
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&array[i]); }
	if(array[0]<array[1]||array[n-1]<array[n-2]) {
             printf("Yes\n");
            flag=0; }
	else {
	        for(i=1;i<n-1;i++)
                if(array[i]<=array[i+1] && array[i]<=array[i-1]) {
	                           printf("Yes\n");
	                           flag=0;
	                           break; }
	     if(flag==1)
	     printf("No\n"); }
	return 0; }