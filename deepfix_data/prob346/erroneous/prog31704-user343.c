#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[10000];
    int i,j;
    for (i=0;i<n;i++)
       scanf("%d",&a[i]);
    for (j=o;j<n;j++) {
      for (i=1;i<n;i++) {
       if (a[j]>a[i])
          a[j]=a[i]; } }
    for (j=0;j<n;j++)
      printf("%d ",&a[j]);
    printf("end");
    return 0; }