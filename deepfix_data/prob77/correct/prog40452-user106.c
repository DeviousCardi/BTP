#include <stdio.h>
int main() {
    int i=0,n,num[1000],max=0,min=0,p;
    scanf("%d",&n);
    int a[i];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        if(a[max]<a[i])
            max=i;
        else if(a[min]>a[i])
            min=i;
      max=p;
      p=min;
      min=max;
        printf("%d ",a[i]); }
    printf("end");
    return 0; }