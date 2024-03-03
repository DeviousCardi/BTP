#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int *t=(int*)malloc(sizeof(int)*n);
	int i;
	for(i=0;i<n;i++){
	    scanf("%d",(t+i)); }
	for(i=0;i<n;i++){
	    printf("%d ",*(t+i)); }
	return 0; }