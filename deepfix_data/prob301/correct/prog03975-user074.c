#include <stdio.h>
#include <stdlib.h>
int main() {
int i,j,k,N;
char a[10000];
      scanf("%d",&N);
      for(i=0;i<=N;i++) {
      scanf("%s",a[i]); }
    if(N==1)
    printf("%c",a[0]);
      for(i=0;i<=N;i=i+2) {
      for(j=i+2;j<=N;j=j+2)
      if(a[j]-a[i]==0) {
         k=a[i]; }
      return k; }
  {printf("%d",k);}
	  return 0; }