#include <stdio.h>
#include <stdlib.h>
int main() {
  int n,i,m,d,x,u,a,b;
   u=1;
  scanf("%d",&n);
  for(i=n;i>1;i=i-2){
      for(m=1;m<=i;m++){
          printf("*"); }
      printf("\n");
      for(a=1;a<=u;a++){
          printf(" "); }
      u=u+1; }
  for(d=1;d<=n;d=d+2){
      for(x=1;x<=d;x++){
          printf("*"); }
      printf("\n");
      for(b=1;b<u-1;b++){
          printf(" "); }
      u=u-1; }
	return 0; }