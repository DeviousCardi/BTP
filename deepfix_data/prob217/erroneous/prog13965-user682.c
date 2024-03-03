#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[10000],sum,N,i,j;
    scanf ("%d\n",&N);
    for (i=0;i<N;i++) {
        scanf ("%d",&arr[i]);
        printf ("%d debug",arr[i]); }
    scanf ("\n");
    scanf ("%d\n",&sum);
    for (i=0;i<N;i++) {
        for (j=1;j<N;j++) {
          if (a[i]+a[j]==sum) {
              printf ("(%d,%d)\n",a[i],a[j]); } } }
	return 0; }