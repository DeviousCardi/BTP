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
    for(i=0;i<3;i++) {
        for(j=0;j<5;j++) {
            printf("%d\n",akermn(3,5)); } }
	return 0; }