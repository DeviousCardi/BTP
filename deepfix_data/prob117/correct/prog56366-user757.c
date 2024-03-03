#include <stdio.h>
#include <stdlib.h>
int Han(int n) {
    if(n==0||n==1)
        return 0;
    return 2*Han(n-1)+1; }
int main() {
	int n,i,res;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    if(n=Han(n-i)) {
	        res=1;
	        break; } }
	if(res==1)
	    printf("Yes");
	else
	    printf("No");
	return 0; }