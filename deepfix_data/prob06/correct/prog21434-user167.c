#include <stdio.h>
#include <stdlib.h>
int main() {
int n,m,x,y;
int i,j;
int A[50],B[50];
scanf("%d",&n);
scanf("%d",&m);
scanf("%d",&x);
scanf("%d",&y);
  for(i=0;i<n;i++) {
      scanf("%d",&A[i]); }
  for(j=0; j<m; j++) {
      scanf("%d",&B[j]); }
  for(i=0;i<n;i++) {
      for(j=0;j<m;j++) {
          if((B[j]-x<=A[i])||(A[i]<=B[j]+y)) {
              printf("%d %d",i-1,j-1); } } }
	return 0; }