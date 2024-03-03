#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
	scanf("%d ",&n);
	if(n==0){printf("0 0"); return 0;}
	int *t=malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	    scanf("%d ",t+i);
	int a=*t, b=*(t+n-1);
	i=0; j=0;
	while(i+j != n) {
	    if(a>b) {
	            j++;
	            b=b+ *(t-j); }
	    if(b>a) {
	            i++;
	            a=a+ *(t+i); }
	    if(a==b) {
	            i++;
	            a=a+ *(t+i); }
	printf("%d %d",i,j);
	return 0; }