#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,m;
    scanf("%d",&n);
    int a[m];
	for(i=0;i<=n;i++){
	    scanf("%d",&a[i]); }
	for(i=0;i<=n;i++){
	    if(( a[i]<=a[i+1])&&(a[i]<=a[i-1]))
	    printf("Yes");
	    else printf("No"); }
	return 0; }