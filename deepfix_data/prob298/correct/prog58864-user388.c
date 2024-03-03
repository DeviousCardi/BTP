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
    for(i=0;i<k;i++) {
        if(k==catalan(i)) {
            printf("yes");
            break; }
        else {
            printf("no");
            break; } } }
int catalan(int i) {
    if(i==1) {
        return 1; }
    return 3*catalan(i-1)-1; }