#include <stdio.h>
#include <stdlib.h>
int main() {
	int size,i,k,count,prev=0,num;
	char a[10000];
	scanf("%d",&size);
	for(i=0;i<size;i++)
	        scanf("%c\n",&a[i]);
	for(i=0;i<size;i++) {
	           k=i;
               count=0;
	           while(a[i]==a[k]) {
	                        count++;
	                        i++; }
	           if(prev<=count) {
	                   prev=count;
                       num=a[k]; } }
	printf("%c",num);
	return 0; }