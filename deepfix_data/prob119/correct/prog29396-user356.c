#include <stdio.h>
#include <stdlib.h>
int hanoi(int n){
    if(n==0){
    return 1;}
    else
    return 2*(hanoi(n-1))-1; }
int main() {
    int t,i,x,n;
    scanf("%d\n",&t);
    for(i=0;i<t;i++) {
        scanf("%d\n",&n);
        x=hanoi(n);
        printf("%d\n",x); }
	return 0; }