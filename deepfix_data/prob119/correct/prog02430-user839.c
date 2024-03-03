#include <stdio.h>
#include <stdlib.h>
int hanoi(int n) {
        if(n==1) {
                return 1; }
        else {
                return 2*hanoi(n-1)+1;; } }
int main() {
    int t,i;
    scanf("%d",&t);
    int ar[t];
    for(i=0;i<t;i++) {
            scanf("%d",&ar[i]); }
    for(i=0;i<t;i++) {
            printf("%d",hanoi(ar[i])); }
	return 0; }