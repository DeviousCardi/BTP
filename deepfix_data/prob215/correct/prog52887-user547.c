#include <stdio.h>
#include <stdlib.h>
int is_perfect(int a) {
    int d[10000], i;
    for (i=0;i<a;i++) {
        if (a%i==0) d[i]=0;
        else d[i]=1; } }
int main() {
	int n;
	scanf("%d",&n);
	is_perfect(n);
	return 0; }