#include <stdio.h>
int main(){
    int k,n,a[500],m=0;
    scanf("%d\n",&k);
    scanf("%d\n",&n);
    for(int i=0;i<n;i++)
    {scanf("%d ",&a[i]);}
    for(int i=0;i<n;i++)
    {for(int j=0;j<n;j++)
     {if(m!=0)
       {break;}
      if((a[i]+a[j])==k)
      {printf("lucky");
      m++;} } }
    if(m==0)
    printf("unlucky");
    return 0; }