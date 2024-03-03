#include <stdio.h>
int main() {
  int i,r,n,y,t;
  scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++)
    {   if(i==n-1)
            scanf("%d\n",&a[i]);
                else
                    scanf("%d ",&a[i]); }
scanf("%d",&r);
    for(i=0;i<n;i++)
    { y=(n-1+i+r)%n;
    printf("%d",a[y]); }
    return 0; }