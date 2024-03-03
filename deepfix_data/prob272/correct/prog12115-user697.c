#include <stdio.h>
int main() {
    int i,n,a,b,c;
    scanf("%d%d%d",&c,&b,&n);
    for(i=3;i<=n;i++) {
      a=b+c-2;
      b=a;
      c=b;
      a=b+c-2;
     if(i==n)
      { printf("%d",a);} }
    if(n==1)
    {printf("%d",c);}
    if(n==2)
    {printf("%d",b);}
    return 0; }