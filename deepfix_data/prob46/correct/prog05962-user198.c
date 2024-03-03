#include <stdio.h>
int main()
{int m,n,cnt=0,i;
scanf("%d%d",&m,&n);
 for(i=2;i<=5;i++)
    {if(n%i==0)
     cnt++; }
 if(cnt==m)
printf("YES");
else
printf("NO");
    return 0; }