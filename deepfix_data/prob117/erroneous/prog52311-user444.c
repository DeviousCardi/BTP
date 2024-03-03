#include <stdio.h>
#include <stdlib.h>
void hanoi(int);
void hanoi(int k) {
    if(k==1) {
    printf("yes\n");
    return; }
    if(k%2==1 || k<0;) {
    printf("no\n");
    return; }
    hanoi(k/2); }
int main() {
    int n,i,t;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    t=0;
	    scanf("%d",&t);
	    hanoi(t+1); }
	return 0; }