#include <stdio.h>
#include <stdlib.h>
int main() {
  int n,i,m,d,x,a;
  scanf("%d",&n);
  for(i=n;i>1;i=i-2){
      for(m=1;m<=i;m++){
              for(a=1;a<=m-1;a++){
                  printf(" "); }
              printf("*"); }
      printf("\n"); }
  for(d=1;d<=n;d=d+2){
      for(x=1;x<=d;x++){
          printf("*"); }
      printf("\n"); }
	return 0; }