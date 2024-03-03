#include <stdio.h>
int main()
{int a,b,i,n;
int count=0;
n=2 ;
scanf("%d %d",&a,&b);
for(i=2;i<=b-1;i++)
{if(i%(2*n)!=0&&i%(3*n)!=0&&i%(5*n)!=0)
{if(b/i==0) count=count+1;}}
if(count==a) printf("YES");
        else printf("NO");
return 0;}