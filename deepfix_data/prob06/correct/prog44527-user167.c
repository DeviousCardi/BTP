#include <stdio.h>
#include <stdlib.h>
int main() {
int n,m,x,y;
int i,j,a=0;
int A[50],B[50],M[50],N[50];
int p=0,s;
scanf("%d",&n);
scanf("%d",&m);
scanf("%d",&x);
scanf("%d",&y);
  for(i=0;i<n;i++) {
      scanf("%d",&A[i]); }
  for(j=0; j<m; j++) {
      scanf("%d",&B[j]); }
  for(i=0;i<n;i++) {
      s=0;
      for(j=p;j<m;j++) {
          if((B[j]-x<=A[i])&&(A[i]<=B[j]+y)) {
              M[a]=i+1;
              N[a]=j+1;
              s=1;
              a++;
               break; } }
     if(s==1)
     p++; }
  printf("%d",a);
  for(i=0; i<a; i++)
  printf("%d %d\n",M[i],N[i]);
	return 0; }