#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[1000];
    int i;
    for (i=0;i<n;i++)
       scanf("%d",&a[i]);
    int max=a[0];
    int min=a[0];
    for (i=0;i<n;i++)
       if (max<a[i])
           max=a[i];
    for (i=0;i<n;i++)
        if (min>a[i])
           min=a[i];
    int temp;
     temp=max;
     max=min;
     min=temp;
    for (i=0;i<n;i++)
      printf("%d\t",a[i]);
    printf("end");
    return 0; }