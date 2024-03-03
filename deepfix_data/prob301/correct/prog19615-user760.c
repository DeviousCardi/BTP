#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a[10000],i,count=0,tempcount=1,mode,tempmode;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	for(i=0;i<n;i++){
	    if(a[i]==a[i+1]){
	        tempcount++;
	        tempmode=a[i]; }
	    else{
	        if(tempcount>=count){
	            count=tempcount;
	            mode=tempmode; }
	        tempcount=1; } }
	printf("%d",count);
	return 0; }