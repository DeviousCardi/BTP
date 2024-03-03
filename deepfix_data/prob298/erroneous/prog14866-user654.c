#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==0)
    return 1;
    else if(n==1)
    return 1;
    else {
        return((4*n-2)*catalen(n-1))/(n+1); } }
   int main() {
       int i,t,n,j,res;
       scanf("%d",&n);
       if(n>35357670)
       printf("no");
       else {
           for(j=0;j<=n+1;j++) {
               if (n==catalan(j)) {
                   res=1;
                   break; }
               else if (atalan(j)>n) {
                   break; } }
           if (res==1) {
               printf("yes\n"); }
           else {
               printf("no\n"); } } }
	return 0; }