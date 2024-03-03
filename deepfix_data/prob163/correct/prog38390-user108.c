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
	int n1, n2, N, i, r=0, t;
	scanf("%d\n", &n1);
	scanf("%d\n", &n2);
	N = max(n1, n2);
	char a[N], b[N], sum[N+1];
	for(i=n1-1; i>=0; i--) {
	    scanf("%c", &a[i]); }
	for(i=n2-1; i>=0; i--) {
	    scanf("%c", &b[i]); }
	i=n1+1;
	while ((i>n1)&&(i<=N)) {
	    a[i]=47;
	    i++; }
	i=n2;
	while ((i>=n2)&&(i<=N)) {
	    b[i]=47;
	    i++; }
	for(i=N; i>=0; i--){
	printf("%c", a[i]);}
	for(i=N; i>=0; i--){
	printf("%c", b[i]);}
	return 0; }