#include <stdio.h>
#include <stdlib.h>
int is_perfect(int a) {
    int d[1000], i, sum = 0;
    for (i=1;i<a;i++) {
        if (a%i==0) {
            d[i-1]=i;
            sum = sum + d[i-1]; }
        else continue; }
    if (sum == a) return 1;
    else return 0; }
int main() {
	int n;
	scanf("%d",&n);
	if (is_perfect(n)==1) printf("YES");
	else printf("NO");
	return 0; }