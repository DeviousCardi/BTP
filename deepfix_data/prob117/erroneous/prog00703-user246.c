#include <stdio.h>
#include <stdlib.h>
int hanoi(int n) {
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return 2*hanoi(n-1)+1; }
int main() {
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    int k,j;
	    scanf("%d",&k);
	    for(j=0;j<10000000;j++)
	        if((hanoi(j)==k)&&hanoi(j)<=k) {
	            printf("yes\n");
	            break; }
	        else if(c>k) {
	            printf("no\n");
	            break; } }
	return 0; }