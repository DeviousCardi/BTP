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
	    printf("%d",hanoi(m)); }
	return 0; }