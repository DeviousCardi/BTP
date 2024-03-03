#include <stdio.h>
#include <stdlib.h>
int main() {
   int n,i,j;
    scanf("%d",&n);
    int peak[n] ;
      for(i=0; i<=n-1; i++) {
             scanf("%d",&peak[i]); }
    for(j=0; j<=n-1; j++) {
           if ((peak[j]>peak[j-1])&&(peak[j]>peak[j+1])){
               printf("yes");
               break; }
        else    if(peak[0]>peak[1]){
               printf("yes");
               break;}
        else   if(peak[n-1]>peak[n-2]){
             printf("Yes");
             break;}
        else{
          printf("No");
          break;} }
	return 0; }