#include <stdio.h>
#include <stdlib.h>
void no_m(int k){
   if(k==0)
   return 0;
   else if(k==1)
   return 1;
   else
   return 2*no_m(k-1)+1; }
int main() {
    int i,t,k[30];
    scanf("%d\n",&t);
    for(i=0;i<t;i++)
    scanf("%d\n",&k[i]);
    for(i=0;i<t;i++)
     printf("%d\n"no_m(k[i]));
	return 0; }