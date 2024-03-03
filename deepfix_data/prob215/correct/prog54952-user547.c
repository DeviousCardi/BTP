#include <stdio.h>
#include <stdlib.h>
int is_perfect(int a) {
    int d[100000000], i, sum = 0;
    for (i=1;i<a;i++) {
        if (a%i==0) {
            d[i]=i;
            sum = sum + d[i]; }
        else continue; }
    if (sum == a) return 1;
    else return 0; }
int main() {
	int n;
	scanf("%d",&n);
	if (is_perfect(n)==1) printf("YES");
	else printf("NO");
	return 0; }