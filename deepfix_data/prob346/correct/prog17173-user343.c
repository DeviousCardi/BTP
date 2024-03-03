#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[10000];
    int i,j;
    for (i=0;i<n;i++)
       scanf("%d",&a[i]);
    for (j=0;j<n;j++) {
      for (i=j+1;i<n;i++) {
       if (a[j]>a[i])
          a[j]=a[i]; }
      printf("%d ",a[j]); }
    printf("end");
    return 0; }