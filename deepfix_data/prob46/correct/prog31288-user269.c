#include <stdio.h>
int main()
{int a,b,k,i;
int count=0;
scanf("%d %d",&a,&b);
for(i=2;i<=b-1;i++)
{if(b/i==0) count=count+1;}
if(count==a) printf("YES");
        else printf("NO");
return 0;}