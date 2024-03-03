#include <stdio.h>
#include <stdlib.h>
int hanoi(int n) {
    if(n<=1) {
        return n; }
    else
    return hanoi(n-1)+1+hanoi(n-1); }
int main() {
	int n,m,i,p;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&m);
	    for(p=0;p<20;p++) {
	        if(m==hanoi(p))
	        printf("Yes");
	        else printf("No"); } }
	return 0; }