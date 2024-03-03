#include <stdio.h>
#include <stdlib.h>
int fab(int n){
    if(n==1)
    return 0;
    else if(n==1)
    return 1;
    else
    return fab(n-1)+fab(n-2); }
int main() {
	int n;
	scanf("%d\n",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++){
	    scanf("%d\n",&a[i]);
	    printf("%d\n",a[i]); }
	return 0; }