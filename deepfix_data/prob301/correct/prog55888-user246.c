#include <stdio.h>
#include <stdlib.h>
int max(int a, int b) {
    if(a>b)
    return a;
    else
    return b; }
int frqn(int a[],int n) {
    int i,c[n+1],t;
    for(i=0;i<n;i++) {
        c[i]=1; }
    for(i=0;i<n;i++) {
        if(a[i]==a[i+1])
        c[a[i]]++; }
    for(i=0;i<n;i++) {
        t=max(c[a[i]],c[a[i+1]]); }
    for(i=0;i<n;i++) {
        if(t==c[a[n-1-i]])
        break; }
    printf("%d",c[a[n-1]]);
    return a[i]; }
int main() {
	int n,i;
	scanf("%d",&n);
	int a[10000];
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	printf("%d",frqn(a,n));
	return 0; }