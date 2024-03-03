#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,count=0,sum=0,i,j;
	scanf("%d",&a);
	int b[a];
	for(i=0;i<a;i++) {
	    scanf("%d ",&b[i]); }
	int c[a];
	for(i=0;i<a;i++) {
	    count=0;
	    for(j=i+1;j<a;j++) {
	        if(b[i]>b[j]) {
	            count++; } }
	    c[i]=count;
	    sum=sum+count; }
	printf("%d\n",sum);
	for(i=0;i<a;i++) {
	    printf("%d",c[i]);
	    if(i<a-1) {
	        printf(" "); } }
	return 0; }