#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
 if(n==0)
 return 1;
 else
 return (4n+1/n+2)catalan(n-1); }
int main() {
int t,i;
scanf("%d",&t);
for(i=0;i<t;i++) {
    scanf("%d",&t); }
 return 0; }