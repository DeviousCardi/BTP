#include <stdio.h>
#include <stdlib.h>
double catalan(int j) {
    if(j==1)
     return 1;
    else
     return ((float)(2*(2*(j-1)+1)/j+1))*catalan(j-1); }
int main() {
	          int t,i,j;
	          double k,n;
              scanf("%d\n",&t);
              for(i=0;i<t;i++) {
                   scanf("%ld\n",&k);
	                 for(j=1;;j++) {
	                      if(catalan(j)>k) {
	                           n=catalan(j);
	                           break; } }
	                printf("%lf\n",n); }
	return 0; }