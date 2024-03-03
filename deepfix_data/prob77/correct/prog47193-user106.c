#include <stdio.h>
int main() {
    int i=0,n,max=0,min=0,p;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
     if(a[min]>a[i])
            min=i;
     else if(a[max]<a[i])
            max=i;
      p=a[min];
      a[min]=a[max];
      a[max]=p;
        printf("%d ",a[i]); }
    printf("end");
    return 0; }