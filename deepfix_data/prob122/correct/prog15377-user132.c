#include <stdio.h>
int main(){
int n,i,j,m;
scanf("%d",&n);
for(i=1;i<=n;i++)
{for(j=1;j<=n;j++)
{scanf("%d",&m);
  if((i==j)&&m!=1)
  {printf("GIVEN n*n matrix is not an identity matrix");
  break;}
  else{if((i!=j)&&m!=0)
  {printf("GIVEN n*n matrix is not an identity matrix");
      break; }
  else{if((i==n)&&(j==n)&&m==1)
      printf("GIVEN n*n matrix is an identity matrix");
  }}}
    return 0;
}}