#include <stdio.h>
#include <stdlib.h>
int ack(int m,int n) {
              if (m==0) return n+1;
              else if (m>0 && n==0) return ack(m-1,1);
              else if (m>0 && n>0) return ack(m-1,ack(m,n-1)) ;
              else return 0; }
int main() {
	          int k,m,n;
	          scanf("%d",&k);
          if for (m=0; m<=3; m++) {
                 for(n=0; n<=5; n++) {
                     if (k==ack(m,n))
                     printf("%d %d",m,n); } }
	        else printf("-1") ;
	return 0; }