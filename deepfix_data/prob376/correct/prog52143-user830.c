#include <stdio.h>
#include <stdlib.h>
  int catalan(int n){
      if(n==0){
          return 1; }
      else if(n==1){
          return 1; }
     else{
     return (2*n*(2*n-1))/((n+1)*n)*catalan(n-1); } }
 int main() {
 	int i,m;
	 int p[20];
	 scanf("%d",&m);
	 for(i=0;i<m;i++){
	     scanf("%d",&p[i]);
	     printf("%d\n",catalan(p[i])); }
 	return 0; }