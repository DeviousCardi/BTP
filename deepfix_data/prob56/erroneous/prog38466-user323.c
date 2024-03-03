#include <stdio.h>
#include <stdlib.h>
  int catalan(int n){
      int i,result=0;
      if(n<=1){
          return=1; }
       else for(i=0;i<n;i++){
       result= result+catalan(i)*catalan(n-i-1); }
      return result; }
int main() {
	printf("%d",catalan(3));
	return 0; }