#include <stdio.h>
#include <stdlib.h>
int cat(int n){
 if (n==0)
 return 1;
 else
  return (2*n)*((2*n)-1)*cat(n-1)/(n*(n+1)); }
int main() {
    int t,i,input;
    scanf("%d\n",&t);
    for (i=0;i<t;i++) {
        scanf("%d\n",&input);
        printf("%d\n",cat(input)); }
    return 0; }