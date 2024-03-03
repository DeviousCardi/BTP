#include <stdio.h>
#include <stdlib.h>
int main() {
		int x[20];
	int i,t,j,k;
	int size;
	scanf("%d\n",&size);
	for(i=0;i<size;i++){
	    scanf("%d\n",&x[i]); }
	scanf("%d\n",&t);
	int b[t];
	for(j=0;j<t;j++){
	    scanf("%d\n",&b[j]); }
	for(k=0;k<t;k++){
	    if(size==1)
	        printf("Yes");
	    else if(b[k]==0) {
	       if(x[b[k]]<x[b[k]+1] && x[b[k]]!=x[b[k]+1])
	       printf("Yes\n"); }
	    else if(b[k]==size-1) {
	       if(x[b[k]]<x[b[k]-1] && x[b[k]]!=x[b[k]-1])
	       printf("Yes\n"); }
	    else if((x[b[k]]<x[b[k]+1])&&(x[b[k]]<x[b[k]-1]) && x[b[k]]!=x[b[k]+1])
	    	printf("Yes\n");
	    else
	        printf("No\n"); }
	return 0; }