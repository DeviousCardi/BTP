#include <stdio.h>
#include <stdlib.h>
int max(int a, int b){
    if (a>=b) {
        return a;
    } else {
        return b; } }
int min(int a, int b){
    if (a>=b) {
        return b;
    } else {
        return a; } }
int main() {
	int n1, n2, N, M,  i, r=0, t;
	scanf("%d\n", &n1);
	scanf("%d\n", &n2);
	N = max (n1, n2);
	M = min (n1, n2);
	int a[N], b[N], sum[N+1];
	for(i=0; i<N; i++) {
	    scanf("%d", &a[i]); }
	for(i=0; i<N; i++) {
	    scanf("%d", &b[i]); }
	for (i=0; i<N; i++) {
	    t= a[i]+b[i] + r;
	    if (t>9) {
	        r=1;
	    } else {
	        r=0; }
	    sum[i]=t%10; }
	sum[N]=r;
	for (i=0; i<=N; i++){
	    printf("%d", sum[i]); }
	return 0; }