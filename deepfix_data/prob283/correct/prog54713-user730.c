#include <stdio.h>
#include <stdlib.h>
int acker(int m, int n) {
      int ret;
      if(m==0)
      ret=n+1;
      if((m>0)&&(n==0))
      ret=acker(m-1,1);
      if((m>0)&& (n>0))
      ret=acker(m-1,acker(m,n-1));
      return ret; }
int main() {
	int input,check,flag=0,i,j;
	scanf("%d",&input);
for(i=0;i<=3;i++) {
        for(j=0;j<=5;j++) {
               check=acker(i,j);
               if(check==input) {
                  flag=1;
                  break; } }
       if(flag==1)
       break; }
  if(flag==1) {
      printf("%d %d",i,j); }
  else {
      printf("-1"); }
	return 0; }