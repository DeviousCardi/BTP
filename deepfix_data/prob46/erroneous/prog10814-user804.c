#include <stdio.h>
int main(){
 int m,i;
  int count = 0;
 int n;
 scanf("%d%d",&m,&n);
 for(i=1;i<=m-1;i =i + 1)
    { if(m%i==0&&i!=1)}
         count = count + 1; }
    if (count==n)
     {printf("YES");}
    else
    {printf("NO");}
    return 0; }