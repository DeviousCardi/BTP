#include <stdio.h>
#include <stdlib.h>
int main() {
	int mode,N,k,count1,count2,arr[10000];
	scanf("%d",&N);
	for(int i=0; i<N,i++)
	{ scanf("%d",&arr[i]); }
	i=0;count1=1;
	while(i<N)
	{   count2=0;
	    for(int k=i+1;k<N;k++) {
	        if(arr[k]==arr[i])
	            count2=count2+1;
	        else
	            break; }
	    if(count2>=count1) {
	        count1=count2;
	        mode=arr[i]; }
	    i=k; }
	printf("%d",mode);
	return 0; }