#include <stdio.h>
#include <stdlib.h>
int s=0;
int hanoi(int n) {
        if(n==1) {
                s++;
                return s; }
        else {
                s=s+hanoi(n-1);
                return s; } }
int main() {
    int t,i;
    scanf("%d",&t);
    int ar[t];
    for(i=1;i<=t;i++) {
            scanf("%d",&ar[i]); }
    for(i=1;i<=t;i++) {
            printf("%d",hanoi(n)); }
	return 0; }