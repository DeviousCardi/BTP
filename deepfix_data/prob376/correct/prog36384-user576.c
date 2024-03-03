#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
 if(n==0)
 return 1;
 else
 return (((4*n+2)*catalan(n-1))/(n+2)); }
int main() {
int t,i;
int m;
scanf("%d",&t);
for(i=0;i<t;i++) {
    scanf("%d",&m);
    if(m==0)
    printf("%d\n",1);
    else
    printf("%d\n",catalan(m-1)); }
 return 0; }