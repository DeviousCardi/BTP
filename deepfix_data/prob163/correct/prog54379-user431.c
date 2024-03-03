#include <stdio.h>
#include <stdlib.h>
int max(int a, int b) {
    if(a>b)
    return a;
    else if(b>a)
    return b;
    else
    return a; }
int main() {
	int n1, n2, i;
	scanf("%d %d", &n1, &n2);
	int len=max(n1, n2)+1;
	int num1[len];
	for(i=0;i<5;i++) {
	    num1[i]=getchar()-48;
	    printf("%d", num1[i]); }
	return 0; }