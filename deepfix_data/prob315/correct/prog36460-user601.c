#include <stdio.h>
#include <stdlib.h>
int main() {
   int i,j,count=0,n;
   scanf("%d\n",&n);
   int A[n];
   for(i=0;i<n;i++) {
       A[i]=getchar(); }
  for(i=0;i<n;i++) {
    for(j=0;j<n;j++) {
        if((A[i]>A[j])&&(i<j)&&(i!=j)) {
            count=count+1; } } }
  printf("%d",count);
	return 0; }