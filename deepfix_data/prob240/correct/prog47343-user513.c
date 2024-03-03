#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    int i,a;
      if (n==0)
    return 1;
    for(i=0;i<n;i++)
       a=a + catalan(n-1-i)*catalan(i);
    return a; }
int main() {
    int j,t,k;
    scanf("%d",&t);
    while(t--) {
        j=0;
        scanf("%d",&k);
        while(k>=catalan(j++));
         if(k==catalan(j-1))
             printf("%d\n",catalan(j-2)); }
    return 0; }