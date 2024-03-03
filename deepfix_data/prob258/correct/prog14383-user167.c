#include <stdio.h>
#include <stdlib.h>
int main() {
   int n,i;
    scanf("%d",&n);
    int peak[n] ;
      for(i=0; i<=n-1; i++) {
             scanf("%d",&peak[i]); } {
           if ((peak[i]>peak[i-1])&&(peak[i]>peak[i+1]))
               printf("yes");
        else    if(peak[0]>peak[1])
               printf("yes");
        else   if(peak[i-1]>peak[i-2])
             printf("yes");
        else
          printf("no"); }
	return 0; }