#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    int i,a=0;
      if (n==0)
    return 1;
    for(i=0;i<n;i++)
       a=a + catalan(n-1-i)*catalan(i);
    return a; }
int main() {
    int j,t,k;
    scanf("%d\n",&t);
    while(t--) {
        j=0;
        scanf("%d",&k);
        while(k>=catalan(j++));
         if(k==catalan(j-1))
            break;
    printf("%d\n",catalan(j-1)); }
    return 0; }