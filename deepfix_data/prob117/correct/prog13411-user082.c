#include <stdio.h>
#include <stdlib.h>
int Hanoi(int n) {
    if(n==0)
    return 0;
    return 2*Hanoi(n-1)+1; }
int main() {
	int t,k,n,i,flag;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    flag=0;
	    scanf("%d\n",&k);
	    for(n=0;n<=k;n++) {
	        if(k==Hanoi(n)) {
	            flag=1; } }
	   if(flag==1)
	   printf("yes\n");
	   else
	   printf("no\n"); }
	return 0; }