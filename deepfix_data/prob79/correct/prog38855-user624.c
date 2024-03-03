#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
	scanf("%d ",&n);
	if(n==0){printf("0 0"); return 0;}
	int *t=malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	    scanf("%d ",t+i);
	if(n==1){printf("1 0"); return 0;}
	int a=*t, b=*(t+n-1);
	i=0; j=0;
	while(i+j != n-2) {
	    if(a>b) {
	            j++;
	            b=b+ *(t-j);
	            continue; }
	    if(b>a) {
	            i++;
	            a=a+ *(t+i);
	            continue; }
	    if(a==b) {
	            if(i+j+4>n) {
	                i++; break; }
	            i++;j++;
	            a=a+ *(t+i);
	            b=b+ *(t+j); } }
	printf("%d %d",i+1,j+1);
	return 0; }