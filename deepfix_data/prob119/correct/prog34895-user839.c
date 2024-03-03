#include <stdio.h>
#include <stdlib.h>
int hanoi(int n) {
        if(n==1) {
                return 1; }
        else if(n==0) {
                return 0; }
        else {
                return 2*hanoi(n-1)+1;; } }
int main() {
    int t,i,p;
    scanf("%d",&t);
    int ar[t];
    for(i=0;i<t;i++) {
            scanf("%d",&ar[i]); }
    for(i=0;i<t;i++) {
            p=hanoi(ar[i]);
            printf("%d",p); }
	return 0; }