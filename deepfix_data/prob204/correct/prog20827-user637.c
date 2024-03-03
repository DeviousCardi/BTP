#include <stdio.h>
#include <stdlib.h>
int main() {
	int p,i;
	scanf("%d",&p);
	int arr[p];
	for(i=0;i<p;i++){
	 scanf("%d",&arr[i]);
	    if(arr[0]==arr[p-1])
	      printf("YES");
	    else
	       printf("NO"); }
    return 0; }