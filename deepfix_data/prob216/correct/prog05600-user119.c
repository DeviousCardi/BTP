#include <stdio.h>
#include <stdlib.h>
int A(int k) {
   if(k==1)
   return 0;
   if(k==2)
   return 1;
   if(k>2)
   return A(k-1)+A(k-2);
   return 0; }
int main(){
    int t,i,k,a,b;
    scanf("%d",&t);
    for(i=1;i<=t;i++) {
        scanf("%d",&k);
        printf("%d\n",A(k)); }
	return 0; }