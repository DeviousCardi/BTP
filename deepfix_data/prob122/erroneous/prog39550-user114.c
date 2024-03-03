#include <stdio.h>
int main(){int n,i,j,a;
scanf("%d",&n);
for(i=1;i<=n;i++)
{for (j=1;j<=n;j++)
    {scanf("%d",&a);
    if(i==j) {if a==1; continue;}
    if(i!=j){if a==0; continue;}
    else printf("Not");} }
    return 0; }