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
	int num2[len];
	int sum[len];
	getchar();
	for(i=0;i<len-1;i++) {
	    if(i<n1)
	    num1[i]=0;
	    else
	    num1[i]=getchar()-48; }
	getchar();
	for(i=0;i<len-1;i++) {
	    if(i<n2)
	    num2[i]=0;
	    else
	    num2[i]=getchar()-48; }
    for(i=0;i<len-1;i++) {
        printf("%d", num1[i]); }
	return 0; }