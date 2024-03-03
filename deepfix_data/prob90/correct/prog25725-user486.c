#include <stdio.h>
int main(){
    int i,j,k,n,l,count=0;
    scanf("%d%d",&l,&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    { k=a[i];
      for(j=0;j<n;j++)
      {if(a[j]==(l-k))
        {count=count+1;} } }
    if(count==0)
    {printf("unlucky");}
    else
    {printf("lucky");}
    return 0; }