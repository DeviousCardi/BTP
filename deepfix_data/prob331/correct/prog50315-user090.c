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
      {sum=sum+1;}
     if((i==j)&&(a!=1))
     {count==0;}
     if((i!=j)&&(a!=0))
     {sum==0;} }
    } if(count==n&&sum==2*n)
       {printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);}
        if (count==0)
        {printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);}
      printf("%d %d",count,sum);
    return 0; }