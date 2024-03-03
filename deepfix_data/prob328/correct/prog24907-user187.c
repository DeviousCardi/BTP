#include <stdio.h>
#include <stdlib.h>
int fibonacci(int n) {
    if(n==1)
    return 0;
    else
    return fibonacci(n-1)+fibonacci(n-2); }
int check(int k) {
    int i;
    for(i=1;i<=20;i++) {
            if(fibonacci(i)==k) {
                return 1;
                break; }
            else
            return 0; } }
int main() {
	int t,k,i;
	for(i=0;i<t;i++) {
	        scanf("%d",&k);
	        if(check(k)==1)
	        printf("yes");
	        else
	        printf("no"); }
	return 0; }