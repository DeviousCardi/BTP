#include <stdio.h>
#include <stdlib.h>
long long int catalan(int n){
 if (n==0)
 return 1;
 else
  return (2*n)*((2*n)-1)*catalan(n-1)/(n*(n+1)); }
int main() {
    int j,i,input;
    scanf("%d\n",&j);
    for (i=0;i<j;i++) {
        scanf("%d\n",&input);
        printf("%lld\n",catalan(input)); }
    return 0; }