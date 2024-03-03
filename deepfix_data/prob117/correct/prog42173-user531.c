#include <stdio.h>
#include <stdlib.h>
int hanoi(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        return hanoi(n-1)+1; }
int main() {
    int t,n,i=0;
    scanf("%d",&t);
    while(t--) {
            scanf("%d",&n);
            while(++i)
            if(n==hanoi(i))
            break;
            printf("%d",hanoi(n)); }
	return 0; }