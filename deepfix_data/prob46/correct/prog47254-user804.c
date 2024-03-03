#include <stdio.h>
int main(){
 int m,i;
  int count = 0;
 int n;
 scanf("%d%d",&m,&n);
 for(i=2;i<=n-1;i =i + 1)
    if(n%i==0&&i!=0)
         {count = count + 1; }
    if (count==m)
     {printf("YES");}
    else
    {printf("NO");}
    return 0; }