#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[1000];
    int i,j;
    for (i=0;i<n;i++)
       scanf("%d",&a[i]);
    int max=a[0];
    int min=a[0];
    for (i=0;i<n;i++)
       if (max<a[i])
           max=a[i];
    for (j=0;j<n;j++)
        if (min>a[j])
           min=a[j];
    int temp;
     temp=a[i];
     a[i]=a[j];
     a[j]=temp;
    for (i=0;i<n;i++)
      printf("%d ",a[i]);
    printf("end");
    return 0; }