#include <stdio.h>
#include <stdlib.h>
long int catalan(int j) { }
int main() {
	          int t,k,i,j,n;
              scanf("%d\n",&t);
              for(i=0;i<t;i++) {
                   scanf("%d\n",&k);
	                 for(j=2;;j++) {
	                      if(catalan(j)>k) {
	                           n=j;
	                           break; } } }
	return 0; }