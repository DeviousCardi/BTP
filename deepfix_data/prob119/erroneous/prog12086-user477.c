#include <stdio.h>
#include <stdlib.h>
void func(int n) {
    if (n==1)
    return 1;
    else {
        func(n-1);
        func(1);
        func(n-1); } }
int main() {
    int t,i,n;
	scanf("%d\n",&t);
	for (i=0;i<t;i++) {
	    scanf("%d\n",&n);
	    printf("%d\n",func(n));
	return 0; }