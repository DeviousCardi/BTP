#include <stdio.h>
#include <stdlib.h>
long fab(int n) {
   if(n==1)
   return 0;
   else if(n==2)
   return 1;
   else return fab(n-1)+fab(n-2); }
int main() {
    int t,n,i;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&n);
        printf("%d\n",fab(n)); }
    	return 0; }