#include <stdio.h>
#include <stdlib.h>
int main() {
	signed int size,i,k,count,prev=0,num,kk;
	char a[10000];
	scanf("%d",&size);
	if(size==1) {
	        scanf("%d",&kk);
	        printf("%d",kk); }
	else {
	    for(i=0;i<size;i++)
	        scanf("%c ",&a[i]);
	    for(i=0;i<size;i++) {
	           k=i;
               count=0;
	           while(a[i]==a[k]) {
	                        count++;
	                        i++; }
	           if(prev<=count) {
	                   prev=count;
                       num=a[k]; } }
	printf("%c",num); }
	return 0; }