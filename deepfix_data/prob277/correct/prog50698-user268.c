#include <stdio.h>
#include <stdlib.h>
int main() {
  int n,i,m,d,x;
  char c='*';
  scanf("%d",&n);
  for(i=n;i>1;i=i-2){
      for(m=1;m<=i;m++){
          printf("%c",c); }
      printf("\n"); }
  for(d=1;d<=n;d=d-2){
      for(x=1;x<=d;x++){
          printf("%c",c); }
      printf("\n"); }
	return 0; }