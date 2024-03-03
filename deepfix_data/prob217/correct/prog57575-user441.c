#include <stdio.h>
#include <stdlib.h>
int main() {
   int n,i,s,j;
   int a[n];
   scanf("%d\n",&n);
   for(i=0;i<n;i++) {
       scanf ("%d\n",&a[i]);
   scanf ("%d\n",&s);
   for(j=0;j<i;j++) {
     if ( s=a[i]+a[j])
       printf ("(%d,%d)",a[i],a[j]); } }
	return 0; }