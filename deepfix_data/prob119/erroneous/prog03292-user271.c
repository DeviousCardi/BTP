#include <stdio.h>
#include <stdlib.h>
int hanoi(int n){
    if(n==0)
    return 0;
    else
    return 2*hanoi(n-1)+1; }
int main() {
    int t,k;
    scanf("%d",&t);
    for(i=1;i<=t;i++) {
        scanf("%d",&k);
        printf("%d\n",hanoi(k)); }
	return 0; }