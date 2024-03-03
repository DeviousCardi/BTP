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
    for(i=0; i<N; i++) {
        t = a[i] + b[i] + r - 94;
        if(t>9) {
            r=1;
        } else {
            r=0; }
        sum[i]='t%10'; }
    sum[N]=r;
    for (i=N; i>=0; i--) {
        printf("%c", sum[i]); }
	return 0; }