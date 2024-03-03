#include <stdio.h>
#include <stdlib.h>
int max(int a, int b){
    if (a>=b) {
        return a;
    } else {
        return b; } }
int main() {
    int i, n1, n2, N, r=0, t;
    scanf("%d\n", &n1);
    scanf("%d\n", &n2);
    N=max(n1, n2);
    char a[n1], b[n2], sum[N];
    for(i=(n1-1); i>=0; i--) {
        scanf("%c", &a[i]); }
    getchar();
    for(i=(n2-1); i>=0; i--) {
        scanf("%c", &b[i]); }
    if(n1>n2) {
        for (i=n2; i<=n1-1; i++) {
            b[i]='0'; }
    } else if (n1<n2) {
        for (i=n1; i<=n2-1; i++) {
            a[i]='0'; } }
        t = a[0] + b[0] + r - 94;
        printf("%d", t);
	return 0; }