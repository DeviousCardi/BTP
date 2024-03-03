#include <stdio.h>
#include <stdlib.h>
  int catalan(int n){
      if (n==0) return 0;
    int i,res=0;
     for(i=0;i<=n;i++) {
         res=res+catalan(i)*catalan(n-1-i) ; }
      return res; }
int main() {
	printf("%d",catalan(3));
	return 0; }