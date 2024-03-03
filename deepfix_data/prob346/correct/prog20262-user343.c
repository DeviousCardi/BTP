#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int price[10000];
    int i,j;
    for (i=0;i<n;i++)
       scanf("%d",&price[i]);
    for (j=0;j<100;j++) {
      for (i=0;i<n;i++) {
       if (price[i]==j)
         printf("%d ",price[i]); } }
    printf("end");
    return 0; }