#include <stdio.h>
#include <stdlib.h>
int main() {
   int n,i,j;
    scanf("%d",&n);
    int peak[n] ;
      for(i=0; i<=n-1; i++) {
             scanf("%d",&peak[i]); }
    for(j=1; j<=n-2; j++) {
           if ((peak[j]>peak[j-1])||(peak[j]>peak[j+1]))
             printf("yes");
        else
          printf("no"); }
	return 0; }