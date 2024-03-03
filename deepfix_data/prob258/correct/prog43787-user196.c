#include <stdio.h>
#include <stdlib.h>
int main() {
	int i, n, a[20],b=0;
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]);
	    printf("\n"); }
	for(i=1;i<9;i++) {
	    if((a[i]>a[i-1])&&(a[i]>a[i+1])) {
	        printf("Yes");
	        b=1;
break; } }
	if(b==0)
	printf("No");
	return 0; }