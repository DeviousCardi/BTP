#include <stdio.h>
#include <stdlib.h>
int len(int a) {
    int i=1;
    int count;
    while(a/i) {
        a=a/i;
        i*=10;
        count++; }
    return count; }
int main() {
    int n;
    scanf("%d", &n);
    length=len(n);
    printf("%d", length);
	return 0; }