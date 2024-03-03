#include <stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int num[100];
    for(i=1;i<=98;i++)
      scanf("%d",&num[i]);
    for(j=1;j<=98;j++) {
        printf("%d%d",j,num[j]); }
    return 0; }