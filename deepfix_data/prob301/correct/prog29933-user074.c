#include <stdio.h>
#include <stdlib.h>
int main() {
int i,j,k,N;
int a[10000];
      scanf("%d",&N);
      for(i=0;i<=N;i++) {
      scanf("%d",a[i]); }
      if(N==1)
      printf("%c",a[0]);
      for(i=0;i<=N;i=i+1) {
      for(j=i+1;j<=N;j=j++)
      if(a[j]-a[i]==0) {
         k=a[i]; }
      return k; }
     {printf("%d",k);}
	  return 0; }