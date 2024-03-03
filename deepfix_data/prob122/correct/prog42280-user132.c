#include <stdio.h>
int main(){
int n,i,j,m;
scanf("%d",&n);
for(i=1;i<=n;i++)
{for(j=1;j<=n;j++)
{if(j==n){scanf("%d/n",&m);}
else {scanf("%d",&m);}
  if((i==j)&&m!=1)
  {printf("GIVEN %d*%d matrix is not an identity matrix",n,n);
  break;}
  else{if((i!=j)&&m!=0)
  {printf("GIVEN %d*%d matrix is not an identity matrix",n,n);
      break; }
  else{if((i==n)&&(j==n)&&m==1)
      printf("GIVEN %d*%d matrix is an identity matrix",n,n);
  }}}
    return 0;
}}