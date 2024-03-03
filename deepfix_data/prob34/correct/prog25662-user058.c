#include <stdio.h>
#include <stdlib.h>
void rowpeak(int);
int a[20], n;
int main() {
	int i, t, m;
	scanf("%d\n", &n);
	for(i=0; i<n; i++) {
	    scanf("%d\n", &a[i]); }
	scanf("%d\n", &m);
	for(i=0; i<m; i++) {
	    scanf("%d\n", &t);
	    if((a[t]>a[t+1]) && (a[t]>a[t-1])) {
	        printf("Yes\n"); }
	    else {
	        printf("No\n"); } }
	return 0; }