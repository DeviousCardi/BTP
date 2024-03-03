#include <stdio.h>
int main()
{int m,n,i;int count=0;
scanf("%d%d",&m,&n);
for(i=2;i<n;i++)
{ if (n%i==0){
    count=count+1;
    while(n%i==0){n=n/i;}}
    scanf("%d",&n); }
    if(count==m)
    printf("YES");
    else printf("NO");
return 0; }