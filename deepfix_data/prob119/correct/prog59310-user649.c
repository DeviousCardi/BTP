#include <stdio.h>
#include <stdlib.h>
int t[3]={0,0,0};
int hanoi(int a[3][20], int n, int start, int dest, int spare) {
    int c=0;
    if(n==1) {
        a[dest][t[dest]]=1;
        t[dest]++;
        t[start]--;
        c++; }
    else {
        hanoi(a, n-1, start, spare, dest);
        a[dest][t[dest]]=n;
        t[dest]++;
        t[start]--;
        hanoi(a, n-1, spare, dest, start);
        c=c+3; }
    return c; }
int main() {
	int i, t, k, a[3][20];
	scanf("%d", &t);
	for(i=1; i<=t; i++) {
	    scanf("%d", &k);
	    printf("%d", hanoi(a, k, 0, 1, 2)); }
	return 0; }