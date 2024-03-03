#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,a[20],j,c[20],k;
    scanf ("%d\n",&j);
    scanf ("%d\n",&k);
    for (i=0;i<j;i++) {
        scanf ("%d\n",&a[i]); }
{   for (k=0;k<j;k++){
            scanf ("%d",&c[i]);
    if ((c[i]>c[i-1])&&(c[i]>c[i+1])) {
        printf ("Yes\n"); }
    else {
        printf ("No\n"); } } }
	return 0; }