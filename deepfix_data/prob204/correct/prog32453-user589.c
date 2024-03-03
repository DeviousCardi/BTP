#include <stdio.h>
#include <stdlib.h>
int main() {
    int i, j, k, count = 0;
    int n;
    int temp[10000], b[10000];
    scanf("%d", n);
    for(i=0; i<10000; i++) {
        temp[i] = n;
        b[i] = n%10;
        n = temp[i]/10;
        i++; }
	return 0; }