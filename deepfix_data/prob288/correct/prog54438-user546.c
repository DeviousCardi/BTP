#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n,k,l,m,s,t;
    scanf("%d",&n);
    k=(n+1)/2;
           for(j=1;j<=k;j++) {
              for(m=k;m>j;m--) {
                  printf(" "); }
              for(t=1;t<=j;t++)
                {  printf("*"); }
                printf("\n"); }
           for(l=1;l<=(k-1);l++) {
               for(m=1;m<=l;m++)
                 {  printf(" "); }
                for(s=1;s<(k-1);s--)
                  {  printf("*"); }
                  printf("\n"); }
	return 0; }