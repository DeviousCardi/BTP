#include <stdio.h>
int main() {
  int i,r,n,y,t;
  scanf("%d\n",&n);
    int a[n+1];
    for(i=1;i<=n;i++)
    {   if(i==n)
            scanf("%d\n",&a[i]);
                else
                    scanf("%d ",&a[i]); }
scanf("%d",&r);
for(;r>0;r--) {
    for(i=1;i<=n;i++)
    { a[i]=a[(i-1)%n]; } }
for(i=1;i<n;i++)
printf("%d",a[i]);
return 0; }