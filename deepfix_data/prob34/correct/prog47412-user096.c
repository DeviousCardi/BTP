#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,a[20],j;
    scanf ("%d",&j);
    for (i=0;i<j;i++) {
        scanf ("%d",&a[i]); }
    if (a[i-1]>a[i-2]&&a[i-1]>a[i]) {
        printf ("Yes"); }
    else {
        printf ("No"); }
	return 0; }