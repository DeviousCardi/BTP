#include <stdio.h>
#include <stdlib.h>
int main() {
	int size;
	int array[10000];
	int i;
	int curr;
	int count=1;
	int precount=1;
	int pre;
	scanf("%d",&size);
	for(i=0;i<size;i++) {
	    scanf("%d",array[i]); }
	curr=array[0];
	for(i=1;i<size;i++) {
	    if(curr==array[i]) {
	        count++; }
	    else {
	        if(count>=precount) {
	            precount=count;
	            pre=curr;
	            curr=array[i];
	            count=1; } } }
	printf("%d",pre);
	return 0; }