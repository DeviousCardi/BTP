#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[10000];
    int i,j;
    for (i=0;i<n;i++)
       scanf("%d",&a[i]);
    for (j=0;j<100;j++) {
      for (i=0;i<n;i++) {
       if (a[i]==j)
         printf("%d ",a[i]); } }
    printf("end");
    return 0; }