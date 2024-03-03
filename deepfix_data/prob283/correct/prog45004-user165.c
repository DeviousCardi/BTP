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
	          if (ack(m,n)==k) {
	              printf("%d %d",m); }
	         else printf("-1");
	return 0; }