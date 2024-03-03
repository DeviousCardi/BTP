#include <stdio.h>
#include <stdlib.h>
int main() {
    int j,n,k,l,m,s,t;
    scanf("%d",&n);
    k=(n+1);
           for(j=1;j<=k;j++) {
              for(m=1;m<=k-j;m++) {
                  printf(" "); }
              for(t=m;t<=k;t++) {
                    if((t+j)%2!=0) {
                       printf("*"); }
                   else{
                       printf("x"); } }
                printf("\n"); }
           for(l=1;l<=(k-1);l++) {
               for(m=1;m<=l;m++)
                 {  printf(" "); }
                for(s=m;s<=k;s++) {
                      if((s+l)%2==0) {
                          printf("x"); }
                      else {
                          printf("*"); } }
                  printf("\n"); }
	return 0; }