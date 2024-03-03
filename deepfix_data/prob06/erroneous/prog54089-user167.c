#include <stdio.h>
#include <stdlib.h>
int main() {
int n,m,i,j,x,y;
scanf("%d %d %d %d",&n&m&x&y);
  for(i=0;i<n;i++) {
      scanf("%d",A[i]); }
  for(j=0; j<m; J++) {
      scanf("%d",B[j]); }
  for(i=0;i<n;i++) {
      for(j=0;j<m;j++) {
          if(B[j]-x<=A[i]<=B[j]+y) {
              printf("%d %d",i-1,j-1); } } }
	return 0; }