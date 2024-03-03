#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,s,j;
    scanf ("%d",&n);
    int a[n];
    for (i=0;i<=n-1;i++) {
        scanf ("%d",& a[i]); }
    scanf ("%d",&s);
    for (i<j) {
        if (a[i]+a[j]==s) {
            printf ("%d",a[i],"%d\n",a[j]); }
        else {
            continue; } }
	return 0; }