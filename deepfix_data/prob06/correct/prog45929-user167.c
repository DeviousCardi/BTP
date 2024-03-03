#include <stdio.h>
#include <stdlib.h>
int main() {
int n,m,x,y;
int i,j,a;
int A[50],B[50];
scanf("%d",&n);
scanf("%d",&m);
scanf("%d",&x);
scanf("%d",&y);
  for(i=0;i<n;i++) {
      scanf("%d",&A[i]); }
  for(j=0; j<m; j++) {
      scanf("%d",&B[j]); }
  a=0;
  for(i=0;i<n;i++) {
      for(j=0;j<m;j++) {
          if((B[j]-x<=A[i])&&(A[i]<=B[j]+y)) {
              a++;
              printf("%d",a);
              printf("\n");
              printf("%d \n %d",i-1,j-1); } } }
	return 0; }