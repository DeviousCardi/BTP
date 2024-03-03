#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    int i,res=0;
      if (n==0) return 0;
     for(i=0;i<n;i++) {
         res=res+catalan(i)*catalan(n-1-i) ; }
      return res; }
int main() {
	printf("%d",catalan(3));
	return 0; }