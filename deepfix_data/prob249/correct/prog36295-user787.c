#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i,j;
scanf("%d",&n);
for(i=1;i<=n;i=i+1){
    if(i==1 || i==n){
        printf("*"); }
      printf("\n");
      if (!(i==1 || i==n)){
      for(j=1;j<=i-1;j=j+1){
          printf("**"); }
      printf("\n"); } }
	return 0; }