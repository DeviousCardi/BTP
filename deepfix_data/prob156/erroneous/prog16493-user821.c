#include <stdio.h>
int main() {
    int n,m;
    int sum=0;
    int max=0;
    scanf("%d%d",&n,&m);
    int n[m];
    for(i=0;i<m;i++) {
        scanf("%d",&n[i]); }
         for(i=0;i<n;i++) {
        sum=sum+n[i];
        if(max<sum)
        max=sum; }
    printf("%d",max);
   return 0; }