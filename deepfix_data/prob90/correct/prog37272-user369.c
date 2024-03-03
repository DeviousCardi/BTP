#include <stdio.h>
int main()
{   int l,n,t,c;
    scanf("%d",&l);
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
   { t=l-a[i];
     for(int j=i+1;j<n;j++) {
        if(a[j]==t)
      { c=1;
        printf("%d\n .",j);
        break; } }
        if(c)
      { printf("lucky");
        break; } }
    if(c==0)
    printf("unlucky");
    return 0; }