#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    int i,a;
      if (n==0)
    return 1;
    for(i=0;i<n;i++)
       sum=sum + catalan(n-1-i)*catalan(i);
    return sum; }
int main() {
    int j,t,k;
    scanf("%d",&t);
    while(t--) {
        j=0;
        scanf("%d",&k);
        while(k>=catalan(i++));
         if(k==catalan(i-1))
             printf("%d\n",catalan(i-2)); } }
    return 0; }