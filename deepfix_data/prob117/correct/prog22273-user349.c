#include <stdio.h>
#include <stdlib.h>
int hanoi(int n) {
    if (n==0)
    return 0;
    else
    return 1+2*hanoi(n-1); }
int check(int k, int i) {
    if (k>hanoi(i)||k<0) {
        return 0;
    } else if (k==hanoi(i)) {
        return 1;
    } else {
        return check(k, i+1); } }
int main() {
	int t, k;
	scanf("%d", &t);
	while(t!=0) {
	    scanf("%d", &k);
	    if(check(k, 0)) {
	        printf("yes\n");
	    } else {
	        printf("no\n"); }
	    t--; }
	return 0; }