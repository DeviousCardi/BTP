#include <stdio.h>
#include <stdlib.h>
int main() {
	int mode,N,i,k,count1,count2,arr[10000];
	scanf("%d",&N);
	i=0;k=0;
    while(i<N) {
	    scanf("%d",&arr[i]);
	    i++; }
	i=0;count1=1;
	while(i<N) {
	    count2=0;
	    k=i+1;
	    while(k<N) {
	        if(arr[k]==arr[i])
	            count2=count2+1;
	        else
	            break;
	         k=k+1; }
	    if(count2>=count1) {
	        count1=count2;
	        mode=arr[i]; }
	    i=k; }
	printf("%d",mode);
	return 0; }