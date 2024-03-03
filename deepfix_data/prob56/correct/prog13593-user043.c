#include <stdio.h>
#include <stdlib.h>
long int catalan(int j,int n) {
    if(j==1)
     return 1;
    else
     return ((n+j)/j)*catalan(j-1,n); }
int main() {
	          int t,i,j,n;
	          long int k;
              scanf("%d\n",&t);
              for(i=0;i<t;i++) {
                   scanf("%ld\n",&k);
	                 for(j=1;;j++) {
	                      if(catalan(j,j)>k) {
	                           n=j;
	                           break; } }
	                printf("%d\n",n); }
	return 0; }