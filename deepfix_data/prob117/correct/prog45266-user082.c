#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int Hanoi(int n) {
    if(n==0)
    return 0;
    return 2*Hanoi(n-1)+1; }
int main() {
	int t,n,i,flag;
	int k;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    flag=0;
	    scanf("%d\n",&k);
	    n=0;
	    while(n<k+1) {
	        if(k==Hanoi(n)) {
	           flag=1; }
	        else {
	            n=n*2; } }
	   if(flag==1)
	   printf("yes\n");
	   else
	   printf("no\n"); }
	return 0; }