#include <stdio.h>
#include <stdlib.h>
  int akermn(int m,int n) {
      if(m==0)
      return n+1;
      else if(m>0 && n==0)
      return akermn(m-1,1);
      else if(m>0 && n>0)
      return akermn(m-1,akermn(m,n-1));
      else
      return 0; }
int main(){
    int k,i,j;
    scanf("%d",&k);
    for(i=0;i<=5;i++) {
        for(j=0;j<=5;j++) {
            if(akermn(i,j)==k) {
            printf("%d %d\n",i,j);
            break; } } }
	return 0; }