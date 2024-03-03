#include <stdio.h>
#include <stdlib.h>
int main() {
    int j,n,k,l,m,s,t;
    scanf("%d",&n);
    k=(n+1);
            for(l=1;l<=(k-1);l++) {
               for(m=1;m<=l;m++)
                 {  printf(" "); }
                for(s=l;s<=k-1;s++) {
                      if((s+l)%2==0) {
                          printf("*"); }
                      else {
                          printf("x"); } }
                  printf("\n"); }
	return 0; }