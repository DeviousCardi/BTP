#include <stdio.h>
#include <stdlib.h>
void space(int n);
void printPattern(int a, int b);
int main() {
    int h, l, i, j;
    scanf("%d%d", &h, &l);
    for(i=1; i<=h; i++) {
        space(h-i);
        printPattern(i, l - 1 + i - (h-i)*2);
        printf("\n"); }
	return 0; }
void space(int n) {
    int i;
    for(i=0; i<n; i++)
    printf(" "); }
void printPattern(int a, int b) {
    for(;a<=b; a++)
    printf("%d", a); }