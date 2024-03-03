#include <stdio.h>
#include <stdlib.h>
int tow_hanoi(int n) {
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return 2*tow_hanoi(n-1)+1; }
int main() {
int t,i,n;
scanf("%d",&t);
for(i=1;i<=t;i++) {
    scanf("%d",&n);
    printf("%d",tow_hanoi(n)); }
	return 0; }