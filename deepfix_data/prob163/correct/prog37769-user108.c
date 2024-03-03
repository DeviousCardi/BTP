#include <stdio.h>
#include <stdlib.h>
int max(int a, int b){
    if (a>=b) {
        return a;
    } else {
        return b; } }
int min(int a, int b){
    if (a>=b) {
        return b;
    } else {
        return a; } }
int main() {
    int i, n1, n2, N, M, r=0;
    scanf("%d\n", &n1);
    scanf("%d\n", &n2);
    N=max(n1, n2);
    char a[n1], b[n2], sum[N];
    for(i=(n1-1); i>=0; i--) {
        scanf("%c", &a[i]); }
    for(i=(n2-1); i>=0; i--) {
        scanf("%c", &b[i]); }
    for (i=n1-1; i>=0; i--) {
        printf("%c", a[i]); }
	return 0; }