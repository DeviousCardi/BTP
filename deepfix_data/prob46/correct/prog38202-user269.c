#include <stdio.h>
int main()
{int a,b,i,n;
int count=0;
n>=2 ;
scanf("%d %d",&a,&b);
for(i=2;i<=b-1;i++)
{if(i!=2*n&&i!=3*n&&i!=5*n){if(b/i==0) count=count+1;}}
if(count==a) printf("YES");
        else printf("NO");
return 0;}