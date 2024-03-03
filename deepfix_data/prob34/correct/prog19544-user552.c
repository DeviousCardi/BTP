#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,j,t;
    scanf("%d\n",&n);
    int a[20];
    for(i=0;i<n;i++) {
        scanf("%d\n",&a[i]); }
    scanf("%d\n",&t);
    for (i=1;i<=t;i++) {
        scanf ("%d\n",&j);
        if (j==0) {
            if (a[j]>a[j+1])
            printf ("Yes\n");
            else printf ("No\n");
            continue; }
        if (j==n) {
            if (a[j>a[j-1]])
            printf ("Yes\n");
            else printf ("No\n");
            continue; }
        if ((a[j]>a[j-1])&&(a[j]>a[j+1]))
        printf ("Yes\n");
        else printf ("No\n"); }
	return 0; }