#include <stdio.h>
int main()
{   char a[1000];
    int n,i,j;
    scanf("%d",&n);
    int k[n];
    scanf("%s",a);
  for(i=0;i<n;i++){
      for(j=i;j<2*n-1;j++){
        if(a[j]!=',')
            k[i]=a[j]-'0';
        else
        break; } }
    for(i=0;i<n;i++){
        printf("%d ",k[i]); }
    return 0; }