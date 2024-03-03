#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,num;
	scanf("%d",&num);
	int *list=(int *)malloc(num*sizeof(int ));
	for(i=0;i<num;i++) {
	    scanf("%d",&list[i]); }
	for(i=0;i<size;i++) {
	    printf("%d ",timer[i]); }
	return 0; }