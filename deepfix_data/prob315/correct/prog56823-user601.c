#include <stdio.h>
#include <stdlib.h>
int main() {
   int A[1000];
   int i,j,count=0,n;
   scanf("%d\n",&n);
   for(i=0;i<n;i++) {
       A[i]=getchar(); }
  for(i=0;i<1000;i++) {
    for(j=0;j<1000;j++) {
        while(i!=j) {
            if(A[i]>A[j]&&j>i) {
            count=count+1; } } } }
  printf("%d",count);
	return 0; }