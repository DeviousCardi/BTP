#include <stdio.h>
#include <stdlib.h>
int fibonacci(int n) {
    if(n==1)
    return 0;
    else if(n==0)
    return 1;
    else
    return (fibonacci(n-1)+fibonacci(n-2)); }
int check(int k) {
    int i;
    for(i=1;i<=20;i++) {
            if(fibonacci(i)==k) {
                break; } }
    if(i==20)
    return 0;
    else
    return 1; }
int main() {
	int t,k,i;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	        scanf("%d",&k);
	        if(check(k)==1)
	        printf("yes");
	        else
	        printf("no"); }
	return 0; }