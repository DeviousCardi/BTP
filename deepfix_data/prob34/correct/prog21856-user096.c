#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,a[20],j,c[20];
    scanf ("%d\n",&j);
    for (i=0;i<j;i++) {
        scanf ("%d\n",&a[i]); }
    for (c[i]=1;c[i]<j;c[i]++){
            scanf ("%d",&c[i]);
    if ((a[i]>a[i-1])&&(a[i]>a[i+1])) {
        printf ("Yes\n"); }
    else {
        printf ("No\n"); } }
	return 0; }