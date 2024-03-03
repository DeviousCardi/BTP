#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,a[20],j,c[20];
    scanf ("%d\n",&j);
    for (i=0;i<j;i++) {
        scanf ("%d\n",&a[i]); }
    scanf ("%d",&b[i]);
    for (c[i]=0;c[i]<b;c[i++]){
    if ((a[i]>a[i-1])&&(a[i]>a[i+1])) {
        printf ("Yes\n"); }
    else {
        printf ("No\n"); } }
	return 0; }