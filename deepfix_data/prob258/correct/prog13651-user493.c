#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n;
    int a[n];
	for(i=0;i<=n;i++){
	    scanf("%d \n",&a[i]); }
	for(i=0;i<=n;i++){
	    if(( a[i]>=a[i+1])&&(a[i]>=a[i-1]))
	    printf("Yes");
	    else printf("No"); }
	return 0; }