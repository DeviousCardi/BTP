#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,ar[10000],i,j;
	int count=1,count1=1,mode;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&ar[i]); }
	mode=ar[0];
	for(i=0;i<n;i++) {
	    for(j=i+1;j<n;j++) {
	        if(ar[i]==ar[j])
	        count1++;
	        else
	        break; }
	    if(count1>=count) {
	        mode=ar[i];
	        count=count1; }
	    i=j-1;
	    count1=1; }
	printf("%d",mode);
	return 0; }