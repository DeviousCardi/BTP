#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,a[20],j;
    scanf ("%d\n",&j);
    for (i=0;i<j;i++) {
        scanf ("%d\n",&a[i]);
    if ((a[i]>a[i-1])&&(a[i]>a[i+1])) {
        printf ("Yes"); }
    else {
        printf ("No"); } }
	return 0; }