#include <stdio.h>
#include <stdlib.h>
int tower_of_hanoi(int n) {
    if(n==0)
    return 0;
    else
    return (2*tower_of_hanoi(n-1)+1); }
int main() {
	int n,i,j,k,m=0;;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&k);
	    for(j=0;j<100;j++) {
	        if(tower_of_hanoi(j)==k) {
	            printf("yes\n"); } } }
	return 0; }