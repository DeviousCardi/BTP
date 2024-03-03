#include <stdio.h>
#include <stdlib.h>
int is_perfect(int a) {
    int d[10000], i, count = 0, sum = 0;
    for (i=0;i<a;i++) {
        if (a%i==0) d[i]=0;
        else continue;
        count = count + 1; }
    for (j=0;j<count;j++) {
        sum = sum + d[j]; }
    if (sum = a) return 1;
    else return 0; }
int main() {
	int n;
	scanf("%d",&n);
	is_perfect(n);
	return 0; }