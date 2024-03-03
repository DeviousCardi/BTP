#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,a[20],j,c[20],k;
    scanf ("%d\n",&j);
    for (i=0;i<j;i++) {
        scanf ("%d\n",&a[i]); }
    scanf ("%d\n",&k);
    for (a[i]=0;a[i]<k;a[i]++){
    if ((a[i+1]>a[i])&&(a[i]>a[i+2])) {
        printf ("Yes\n"); }
    else {
        printf ("No\n"); } }
	return 0; }