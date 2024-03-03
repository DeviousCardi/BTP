#include <stdio.h>
#include <stdlib.h>
int main() {
 int n,j;
 int cont[20];
 scanf ("%d",&n);
 for (j=0;j<n;j++) {
     scanf ("%d",&cont[j]); }
if (((cont[j] > cont[j-1]) && (cont[j] > cont [j+1])) || ((cont[n]>cont[n-1] && cont [n] > cont [n+1]))) {
        printf ("Yes"); }
    else {
        if (cont[1] > cont [2] || cont [n-1] > cont [n-2] )
        printf("Yes");
    else printf ("No"); }
	return 0; }