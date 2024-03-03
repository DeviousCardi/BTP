#include <stdio.h>
#include <stdlib.h>
long int catalan(int j) {
    if(j==0)
     return 1;
    else
     return (2*(2*(j)+1)/j+2))*catalan(j-1); }
int main() {
	          int t,i,j;
	          long int k,n;
              scanf("%d\n",&t);
              for(i=0;i<t;i++) {
                   scanf("%ld\n",&k);
	                 for(j=1;;j++) {
	                      if(catalan(j)>k) {
	                           n=catalan(j);
	                           break; } }
	                printf("%ld\n",n); }
	return 0; }