#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int num[n];
    for(i=1;i<=n;i++)
      scanf("%d",&num[i]);
    for(j=1;j<=n;j++) {
        printf("%d  %d  ",j,num[j]); }
    return 0; }