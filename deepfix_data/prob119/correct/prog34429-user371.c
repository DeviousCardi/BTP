#include <stdio.h>
#include <stdlib.h>
int hanoi(int k) {
    if(k==1) {
        return 1; }
    else {
        return ((2*hanoi(k-1))+1); } }
int main() {
	int t, k, i;
	scanf("%d", &t);
	for(i=1;i<=t;i++) {
	    scanf("%d", &k);
	    printf("%d\n",hanoi(k)); }
	return 0; }