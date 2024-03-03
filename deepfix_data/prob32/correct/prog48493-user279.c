#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n;
	int array[20];
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&array[i]); }
	if(array[0]<array[1]||array[n-1]<array[n-2])
         printf("Yes\n");
	else
	     for(i=1;i<n-1;i++) {
                     if(array[n]<=array[n+1] && array[n]<=array[n-1])
	                        printf("Yes\n");
	                else
	                        printf("No\n"); }
	return 0; }