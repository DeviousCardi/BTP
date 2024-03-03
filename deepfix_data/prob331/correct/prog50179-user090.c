#include <stdio.h>
int main(){
    int i,j,n,a,count,sum ;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {for(j=1;j<=n;j++)
     {scanf("%d",&a) ;
     if((i==j)&&(a==1))
     {count=count+1;}
      if((i!=j)&&(a=0))
      {sum=sum+1;} } }
      printf("%d %d",count,sum);
    return 0; }