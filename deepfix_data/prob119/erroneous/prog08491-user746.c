#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int hanoi(int k) {
    if(k==0)
    return 0;
    else
    return 2*hanoi(n-1)+1; }
int main() {
	int t,i;
	scanf("%d",&t);
	int k[t];
	for(i=0;i<t;i++) {
	    scanf("\n%d",&k[i]); }
	for(i=0;i<t;i++) {
	    hanoi(k[i]); }
	return 0; }