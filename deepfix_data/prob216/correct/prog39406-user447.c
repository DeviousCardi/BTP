#include <stdio.h>
#include <stdlib.h>
int fibonacci(int n) {
    if (n==1) return 0;
    if (n==2) return 1;
    return (fibonacci(n-1)+fibonacci(n-2)); }
int main() {
	int i,t,a;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&a);
	    printf("%d\n",fibonacci(a)); }
	return 0; }