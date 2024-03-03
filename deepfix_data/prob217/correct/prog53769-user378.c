#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,s,j;
    scanf ("%d",&n);
    int a[n];
    for (i=0;i<=n-1;i++) {
        scanf ("%d",& a[i]); }
    scanf ("%d",&s);
    for (j=0;j<=n;j++)
    {for (i=0;i<j;i++) {
        if (a[i]+a[j]==s) {
            printf ('("%d","%d\n")',a[i],a[j]); }
        else {
            continue; }
    }}
	return 0; }