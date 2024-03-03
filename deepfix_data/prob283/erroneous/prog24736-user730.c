#include <stdio.h>
#include <stdlib.h>
int acker(int m, int n) {
      if(m==0)
      return n+1;
      if((m>0)&&(n==0))
      return acker(m-1,1);
      if((m>0)&& (n>0))
      return acker(m-1,acker(m,n-1)); }
int main() {
	int input,check,flag=0;
	scanf("%d",&input);
 for(i=0;i<=3;i++) {
        for(j=0;j<=5;j++) {
               check=acker(i,j);
               if(check==input) {
                  flag=1;
                  break; }
                 if(flag==1)
                 break; } }
  if(flag==1) {
      printf("%d %d",i,j); }
  else {
      printf("-1"); }
	return 0; }