#include <stdio.h>
int main() {
  int i,r,n,y,t;
  scanf("%d\n",&n);
    int a[n+1];
    for(i=0;i<n;i++)
    {   if(i==n-1)
            scanf("%d\n",&a[i]);
                else
                    scanf("%d ",&a[i]); }
scanf("%d",&r);
for(;r>0;r--) {
    for(i=n;i>0;i--)
    { a[i]=a[i-1]; } }
for(i=0;i<n;i++)
printf("%d",a[i]);
return 0; }