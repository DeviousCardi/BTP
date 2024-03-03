#include <stdio.h>
int main()
{   char a[1000];
    int n,i;
    scanf("%d",&n);
    int k[n];
    scanf("%s",a);
  for(i=0;i<n;i++){
      for(j=0;j<2*n-1;j++){
        if(a[i]!=',')
            k[i]=a[i]-'0';
        else
        break; } }
    for(i=0;i<n;i++){
        printf("%d ",k[i]); }
    return 0; }