#include <stdio.h>
#include <stdlib.h>
unsigned int fac(int n) {
    unsigned int f=1;
    for(;n>1;n--) {
        f*=n; }
    return f; }
int catlan(int n) {
    if(n==0) {
        return 1; }
    return (2*((2*n)-1)*catlan(n-1))/(n+1); }
int check(int k) {
    int i;
    if(k==0) {
        return 0; }
    for(i=1;i<=17;i++) {
        if(catlan(i)==k) {
            return 1; } }
    return 0; }
int main() {
	int t, i, k;
	scanf("%d",&t);
	for(i=1;i<=t;i++) {
	    scanf("%d",&k);
	    if(check(k)) {
	        printf("yes\n"); }
	    else {
	        printf("no\n"); } }
	return 0; }