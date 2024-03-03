#include <stdio.h>
int main() {
	int size;
	int array[50];
	scanf("%d\n",&size);
	for(int i=0; i<size; i++) {
	    scanf("%d ",&array[i]); }
	for(int j=0; j<size-1; j++) {
	    for(int k=j+1; k<size; k++) {
	        if(array[j]==array[k]) {
	            printf("YES\n");
	            return 0; } } }
	printf("NO\n");
	return 0; }