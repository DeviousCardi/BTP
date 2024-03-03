#include <stdio.h>
#include <stdlib.h>
int fibonacci(int n) {
    if (n==0) return 0;
    if (n==1) return 1;
    return (fibonacci(n-1)+fibonacci(n)); }
int main() {
	int i,t,a[100];
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&a[i]);
	    printf("%d",fibonacci(a[i])); }
	return 0; }