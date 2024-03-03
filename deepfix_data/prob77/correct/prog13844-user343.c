#include <stdio.h>
int main() {
  int n;
    scanf("%d",&n);
  int a[1000];
  int i,j;
    for (i=0;i<n;i++)
      scanf("%d",&a[i]);
  int large=a[0];
  int small=a[0];
    for (i=0;i<n;i++){
       if(large<a[i])
           large=a[i]; }
    for (j=0;j<n;j++){
        if(small>a[j])
            small=a[j]; }
    for (i=0;i<n;i++){
       if (a[i]==large)
          printf("%d ",small);
       else if (a[i]==small)
          printf("%d ",large);
       else
          printf("%d ",a[i]); }
    printf("end");
    return 0; }