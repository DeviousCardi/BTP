#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int hanoi(int n) {
    if(n==0) return 0;
    return 2*hanoi(n-1)+1; }
int main() {
	int t,k;
	int i,j,c;
	scanf("%d",&t);
	for(j=0;j<t;j++) {
	    c=0;
	    scanf("%d",&k);
	    for(i=0;hanoi(i)<=k;i++) {
	        if(hanoi(i)==k) {
	            c++;
	            printf("yes\n");
	            break; } }
	    if(c==0) printf("no\n"); }
	return 0; }