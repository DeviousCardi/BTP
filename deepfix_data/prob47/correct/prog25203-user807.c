#include <stdio.h>
#include <stdlib.h>
int cat(int n) {
    if(n==0)
   return 1;
 return 2*(2*n-1)*cat(n-1)/n+1; }
int main() {
    int i,t,j,sum=0;
    int s[10];
    scanf("%d\n",&t);
    for(i=0;i<t;i++)
    { scanf("%d\n",&s[i]);
     for(j=0;j<s[i];j++)
     { sum+=cat(j);}
     printf("%d\n",sum); }
    return 0; }