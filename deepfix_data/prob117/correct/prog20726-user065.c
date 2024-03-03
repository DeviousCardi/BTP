#include <stdio.h>
#include <stdlib.h>
int hanoi (int n) {
    if(n==1) {
        return 1; }
    else {
        return (hanoi(n-1)+1+hanoi(n-1)); } }
int main() {
	int i,j, t, k, count;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    count=0;
	    scanf("%d\n",&k);
	    for(j=0;j<50;j++) {
	        if(k==hanoi(j)) {
	            count=1;
	            break; } }
	    if(count==1) {
	        printf("yes\n"); }
	    else {
	        printf("no\n"); } }
	return 0; }