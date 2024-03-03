#include <stdio.h>
#include <stdlib.h>
int main() {
	int sample[20],n,i,result;
	result=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d",&sample[i]);
	    if(i>1&&sample[i-1]<sample[i-2]&&sample[i-1]<sample[i]{
	        result=1; } }
	if (result){
	    printf("Yes"); }
	else printf("No");
	return 0; }