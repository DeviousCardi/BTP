#include <stdio.h>
#include <stdlib.h>
int check(int n) {
    int i;
    for(i=0; i<=17; i++) {
        if(cat(i)==n)
        return 1; }
    return 0; }
int cat(int n) {
    int i;
    if(n==0)
    return 1;
    int res=0;
    for(i=0; i<n; i++) {
        res=res+cat(i)*cat(n-1-i); }
    return res; }
int main() {
	int t, i;
	scanf("%d",&t);
	int a[t];
	for(i=0; i<t; i++) {
	    scanf("%d",&t);
	    if(check(a[i]))
	    printf("yes");
	    else
	    printf("no"); }
	return 0; }