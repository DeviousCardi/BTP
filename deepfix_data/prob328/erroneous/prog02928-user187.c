#include <stdio.h>
#include <stdlib.h>
void fibonacci(int n)           \\k is position in fibonacci series; {
    fibonacci(1)=0;
    fibonacci(2)=1;
    fibonacci(n)=fibonacci(n-1)+fibonacci(n-2); }
int check(int k) {
    int i;
    for(i=1;i<=20;i++) {
            if(fibonacci(i)==k)
            return 1;
            else
            return 0; } }
int main() {
	int t,k,i;
	for(i=0;i<t;i++) {
	        scanf("%d",&k);
	        if(check(k)==1)
	        printf("yes");
	        else
	        no; }
	return 0; }