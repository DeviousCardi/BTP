#include <stdio.h>
#include <stdlib.h>
int Hanoi(int n) {
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    return 2*Hanoi(n-1)+1; }
int main() {
	int t,k,n,i;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%ch\n",k);
	    for(n=0;n<k;n++) {
	        if(k==Hanoi(n)) {
	            printf("yes"); } } }
	printf("no");
	return 0; }