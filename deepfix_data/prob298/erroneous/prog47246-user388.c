#include <stdio.h>
#include <stdlib.h>
void is_catalan(int);
int main() {
	int t;
	scanf("%d",&t);
	int i,k;
	for(i=1;i<=t;i++) {
	    scanf("%d",&k);
	    is_catalan(k); }
	return 0; }
int catalan(int);
void is_catalan(int k) {
    int i;
    for(i=0;i<17;i++) {
        if(k==catalan(i)) {
            printf("yes\n");
            return; } }
    printf("no\n"); }
int catalan(int i) {
    if(i==0||i==1) {
        return 1; }
    return ((2*i*(2*i-1))/(n*(n+1))*catalan(i-1); }