#include <stdio.h>
int main(){
    int i,j,n,a,count,sum ;
    scanf("%d",&n);
    sum=0 ;
    count=0 ;
    int z=sum+count ;
    for(i=1;i<=n;i++)
    {for(j=1;j<=n;j++)
     {scanf("%d",&a) ;
     if((i==j)&&(a==1))
     {count=count+1;}
      if((i!=j)&&(a=0))
      {sum=sum+1;} } }
       if(z==n)
       {printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);}
        else
        {printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);}
    return 0; }